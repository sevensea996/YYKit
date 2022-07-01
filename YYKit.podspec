Pod::Spec.new do |s|
  s.name         = 'YYKit'
  s.summary      = 'A collection of iOS components.'
  s.version      = '2.0.0'
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.authors      = { 'ibireme' => 'ibireme@gmail.com' }
  s.social_media_url = 'http://blog.ibireme.com'
  s.homepage     = 'https://github.com/ibireme/YYKit'
  s.platform     = :ios, '9.0'
  s.ios.deployment_target = '9.0'
  s.source       = { :git => 'https://github.com/sevensea996/YYKit.git', :tag => s.version.to_s }

  s.libraries = 'z', 'sqlite3'
  s.frameworks = 'UIKit', 'CoreFoundation', 'CoreText', 'CoreGraphics', 'CoreImage', 'QuartzCore', 'ImageIO', 'AssetsLibrary', 'Accelerate', 'MobileCoreServices', 'SystemConfiguration'
  s.ios.vendored_frameworks = 'Vendor/WebP.framework'

  s.source_files = 'YYKit/YYKit.h'

  s.subspec 'Base' do |ss|
    ss.source_files = 'YYKit/Base/**/*.{h,m}'
  end

  s.subspec 'Utility' do |ss|
    ss.source_files = 'YYKit/Utility/**/*.{h,m}'
    ss.dependency 'YYKit/Base'
  end

  s.subspec 'Model' do |ss|
    ss.source_files = 'YYKit/Model/**/*.{h,m}'
  end

  s.subspec 'Cache' do |ss|
    ss.source_files = 'YYKit/Cache/**/*.{h,m}'
    ss.dependency 'YYKit/Base'
  end

  s.subspec 'Image' do |ss|
    ss.source_files = 'YYKit/Image/**/*.{h,m}'
    ss.dependency 'YYKit/Cache'
    ss.dependency 'YYKit/Utility'
  end

  s.subspec 'Text' do |ss|
    ss.source_files = 'YYKit/Text/**/*.{h,m}'
    ss.dependency 'YYKit/Image'
  end


end
