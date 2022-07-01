//
//  YYKit.h
//  YYKit <https://github.com/ibireme/YYKit>
//
//  Created by ibireme on 13/3/30.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <Foundation/Foundation.h>

#if __has_include(<YYKit/YYKit.h>)

FOUNDATION_EXPORT double YYKitVersionNumber;
FOUNDATION_EXPORT const unsigned char YYKitVersionString[];

#if __has_include(<YYKit/YYKitMacro.h>)
#import <YYKit/YYKitMacro.h>
#endif

#if __has_include(<YYKit/NSObject+YYAdd.h>)
#import <YYKit/NSObject+YYAdd.h>
#endif

#if __has_include(<YYKit/NSObject+YYAddForKVO.h>)
#import <YYKit/NSObject+YYAddForKVO.h>
#endif

#if __has_include(<YYKit/NSString+YYAdd.h>)
#import <YYKit/NSString+YYAdd.h>
#endif

#if __has_include(<YYKit/NSNumber+YYAdd.h>)
#import <YYKit/NSNumber+YYAdd.h>
#endif

#if __has_include(<YYKit/NSData+YYAdd.h>)
#import <YYKit/NSData+YYAdd.h>
#endif

#if __has_include(<YYKit/NSArray+YYAdd.h>)
#import <YYKit/NSArray+YYAdd.h>
#endif

#if __has_include(<YYKit/NSDictionary+YYAdd.h>)
#import <YYKit/NSDictionary+YYAdd.h>
#endif

#if __has_include(<YYKit/NSDate+YYAdd.h>)
#import <YYKit/NSDate+YYAdd.h>
#endif

#if __has_include(<YYKit/NSNotificationCenter+YYAdd.h>)
#import <YYKit/NSNotificationCenter+YYAdd.h>
#endif

#if __has_include(<YYKit/NSKeyedUnarchiver+YYAdd.h>)
#import <YYKit/NSKeyedUnarchiver+YYAdd.h>
#endif

#if __has_include(<YYKit/NSTimer+YYAdd.h>)
#import <YYKit/NSTimer+YYAdd.h>
#endif

#if __has_include(<YYKit/NSBundle+YYAdd.h>)
#import <YYKit/NSBundle+YYAdd.h>
#endif

#if __has_include(<YYKit/UIColor+YYAdd.h>)
#import <YYKit/UIColor+YYAdd.h>
#endif

#if __has_include(<YYKit/UIImage+YYAdd.h>)
#import <YYKit/UIImage+YYAdd.h>
#endif

#if __has_include(<YYKit/UIControl+YYAdd.h>)
#import <YYKit/UIControl+YYAdd.h>
#endif

#if __has_include(<YYKit/UIBarButtonItem+YYAdd.h>)
#import <YYKit/UIBarButtonItem+YYAdd.h>
#endif

#if __has_include(<YYKit/UIGestureRecognizer+YYAdd.h>)
#import <YYKit/UIGestureRecognizer+YYAdd.h>
#endif

#if __has_include(<YYKit/UIView+YYAdd.h>)
#import <YYKit/UIView+YYAdd.h>
#endif

#if __has_include(<YYKit/UIScrollView+YYAdd.h>)
#import <YYKit/UIScrollView+YYAdd.h>
#endif

#if __has_include(<YYKit/UITableView+YYAdd.h>)
#import <YYKit/UITableView+YYAdd.h>
#endif

#if __has_include(<YYKit/UITextField+YYAdd.h>)
#import <YYKit/UITextField+YYAdd.h>
#endif

#if __has_include(<YYKit/UIScreen+YYAdd.h>)
#import <YYKit/UIScreen+YYAdd.h>
#endif

#if __has_include(<YYKit/UIDevice+YYAdd.h>)
#import <YYKit/UIDevice+YYAdd.h>
#endif

#if __has_include(<YYKit/UIApplication+YYAdd.h>)
#import <YYKit/UIApplication+YYAdd.h>
#endif

#if __has_include(<YYKit/UIFont+YYAdd.h>)
#import <YYKit/UIFont+YYAdd.h>
#endif

#if __has_include(<YYKit/UIBezierPath+YYAdd.h>)
#import <YYKit/UIBezierPath+YYAdd.h>
#endif

#if __has_include(<YYKit/CALayer+YYAdd.h>)
#import <YYKit/CALayer+YYAdd.h>
#endif

#if __has_include(<YYKit/YYCGUtilities.h>)
#import <YYKit/YYCGUtilities.h>
#endif

#if __has_include(<YYKit/NSObject+YYModel.h>)
#import <YYKit/NSObject+YYModel.h>
#endif

#if __has_include(<YYKit/YYClassInfo.h>)
#import <YYKit/YYClassInfo.h>
#endif

#if __has_include(<YYKit/YYCache.h>)
#import <YYKit/YYCache.h>
#endif

#if __has_include(<YYKit/YYMemoryCache.h>)
#import <YYKit/YYMemoryCache.h>
#endif

#if __has_include(<YYKit/YYDiskCache.h>)
#import <YYKit/YYDiskCache.h>
#endif

#if __has_include(<YYKit/YYKVStorage.h>)
#import <YYKit/YYKVStorage.h>
#endif

#if __has_include(<YYKit/YYImage.h>)
#import <YYKit/YYImage.h>
#endif

#if __has_include(<YYKit/YYFrameImage.h>)
#import <YYKit/YYFrameImage.h>
#endif

#if __has_include(<YYKit/YYSpriteSheetImage.h>)
#import <YYKit/YYSpriteSheetImage.h>
#endif

#if __has_include(<YYKit/YYAnimatedImageView.h>)
#import <YYKit/YYAnimatedImageView.h>
#endif

#if __has_include(<YYKit/YYImageCoder.h>)
#import <YYKit/YYImageCoder.h>
#endif

#if __has_include(<YYKit/YYImageCache.h>)
#import <YYKit/YYImageCache.h>
#endif

#if __has_include(<YYKit/YYWebImageOperation.h>)
#import <YYKit/YYWebImageOperation.h>
#endif

#if __has_include(<YYKit/YYWebImageManager.h>)
#import <YYKit/YYWebImageManager.h>
#endif


#if __has_include(<YYKit/UIImageView+YYWebImage.h>)
#import <YYKit/UIImageView+YYWebImage.h>
#endif

#if __has_include(<YYKit/UIButton+YYWebImage.h>)
#import <YYKit/UIButton+YYWebImage.h>
#endif

#if __has_include(<YYKit/MKAnnotationView+YYWebImage.h>)
#import <YYKit/MKAnnotationView+YYWebImage.h>
#endif

#if __has_include(<YYKit/CALayer+YYWebImage.h>)
#import <YYKit/CALayer+YYWebImage.h>
#endif

#if __has_include(<YYKit/YYLabel.h>)
#import <YYKit/YYLabel.h>
#endif

#if __has_include(<YYKit/YYTextView.h>)
#import <YYKit/YYTextView.h>
#endif

#if __has_include(<YYKit/YYTextAttribute.h>)
#import <YYKit/YYTextAttribute.h>
#endif

#if __has_include(<YYKit/YYTextArchiver.h>)
#import <YYKit/YYTextArchiver.h>
#endif

#if __has_include(<YYKit/YYTextParser.h>)
#import <YYKit/YYTextParser.h>
#endif

#if __has_include(<YYKit/YYTextUtilities.h>)
#import <YYKit/YYTextUtilities.h>
#endif

#if __has_include(<YYKit/YYTextRunDelegate.h>)
#import <YYKit/YYTextRunDelegate.h>
#endif

#if __has_include(<YYKit/YYTextRubyAnnotation.h>)
#import <YYKit/YYTextRubyAnnotation.h>
#endif

#if __has_include(<YYKit/NSAttributedString+YYText.h>)
#import <YYKit/NSAttributedString+YYText.h>
#endif

#if __has_include(<YYKit/NSParagraphStyle+YYText.h>)
#import <YYKit/NSParagraphStyle+YYText.h>
#endif

#if __has_include(<YYKit/UIPasteboard+YYText.h>)
#import <YYKit/UIPasteboard+YYText.h>
#endif

#if __has_include(<YYKit/YYTextLayout.h>)
#import <YYKit/YYTextLayout.h>
#endif

#if __has_include(<YYKit/YYTextLine.h>)
#import <YYKit/YYTextLine.h>
#endif

#if __has_include(<YYKit/YYTextInput.h>)
#import <YYKit/YYTextInput.h>
#endif

#if __has_include(<YYKit/YYTextDebugOption.h>)
#import <YYKit/YYTextDebugOption.h>
#endif

#if __has_include(<YYKit/YYTextContainerView.h>)
#import <YYKit/YYTextContainerView.h>
#endif

#if __has_include(<YYKit/YYTextSelectionView.h>)
#import <YYKit/YYTextSelectionView.h>
#endif

#if __has_include(<YYKit/YYTextMagnifier.h>)
#import <YYKit/YYTextMagnifier.h>
#endif

#if __has_include(<YYKit/YYTextEffectWindow.h>)
#import <YYKit/YYTextEffectWindow.h>
#endif

#if __has_include(<YYKit/YYTextKeyboardManager.h>)
#import <YYKit/YYTextKeyboardManager.h>
#endif

#if __has_include(<YYKit/YYReachability.h>)
#import <YYKit/YYReachability.h>
#endif

#if __has_include(<YYKit/YYGestureRecognizer.h>)
#import <YYKit/YYGestureRecognizer.h>
#endif

#if __has_include(<YYKit/YYFileHash.h>)
#import <YYKit/YYFileHash.h>
#endif

#if __has_include(<YYKit/YYKeychain.h>)
#import <YYKit/YYKeychain.h>
#endif

#if __has_include(<YYKit/YYWeakProxy.h>)
#import <YYKit/YYWeakProxy.h>
#endif

#if __has_include(<YYKit/YYTimer.h>)
#import <YYKit/YYTimer.h>
#endif

#if __has_include(<YYKit/YYTransaction.h>)
#import <YYKit/YYTransaction.h>
#endif

#if __has_include(<YYKit/YYAsyncLayer.h>)
#import <YYKit/YYAsyncLayer.h>
#endif

#if __has_include(<YYKit/YYSentinel.h>)
#import <YYKit/YYSentinel.h>
#endif

#if __has_include(<YYKit/YYDispatchQueuePool.h>)
#import <YYKit/YYDispatchQueuePool.h>
#endif

#if __has_include(<YYKit/YYThreadSafeArray.h>)
#import <YYKit/YYThreadSafeArray.h>
#endif

#if __has_include(<YYKit/YYThreadSafeDictionary.h>)
#import <YYKit/YYThreadSafeDictionary.h>
#endif

#else


#if __has_include("YYKitMacro.h")
#import "YYKitMacro.h"
#endif

#if __has_include("NSObject+YYAdd.h")
#import "NSObject+YYAdd.h"
#endif

#if __has_include("NSObject+YYAddForKVO.h")
#import "NSObject+YYAddForKVO.h"
#endif

#if __has_include("NSString+YYAdd.h")
#import "NSString+YYAdd.h"
#endif

#if __has_include("NSNumber+YYAdd.h")
#import "NSNumber+YYAdd.h"
#endif

#if __has_include("NSData+YYAdd.h")
#import "NSData+YYAdd.h"
#endif

#if __has_include("NSArray+YYAdd.h")
#import "NSArray+YYAdd.h"
#endif

#if __has_include("NSDictionary+YYAdd.h")
#import "NSDictionary+YYAdd.h"
#endif

#if __has_include("NSDate+YYAdd.h")
#import "NSDate+YYAdd.h"
#endif

#if __has_include("NSNotificationCenter+YYAdd.h")
#import "NSNotificationCenter+YYAdd.h"
#endif

#if __has_include("NSKeyedUnarchiver+YYAdd.h")
#import "NSKeyedUnarchiver+YYAdd.h"
#endif

#if __has_include("NSTimer+YYAdd.h")
#import "NSTimer+YYAdd.h"
#endif

#if __has_include("NSBundle+YYAdd.h")
#import "NSBundle+YYAdd.h"
#endif

#if __has_include("UIColor+YYAdd.h")
#import "UIColor+YYAdd.h"
#endif

#if __has_include("UIImage+YYAdd.h")
#import "UIImage+YYAdd.h"
#endif

#if __has_include("UIControl+YYAdd.h")
#import "UIControl+YYAdd.h"
#endif

#if __has_include("UIBarButtonItem+YYAdd.h")
#import "UIBarButtonItem+YYAdd.h"
#endif

#if __has_include("UIGestureRecognizer+YYAdd.h")
#import "UIGestureRecognizer+YYAdd.h"
#endif

#if __has_include("UIView+YYAdd.h")
#import "UIView+YYAdd.h"
#endif

#if __has_include("UIScrollView+YYAdd.h")
#import "UIScrollView+YYAdd.h"
#endif

#if __has_include("UITableView+YYAdd.h")
#import "UITableView+YYAdd.h"
#endif

#if __has_include("UITextField+YYAdd.h")
#import "UITextField+YYAdd.h"
#endif

#if __has_include("UIScreen+YYAdd.h")
#import "UIScreen+YYAdd.h"
#endif

#if __has_include("UIDevice+YYAdd.h")
#import "UIDevice+YYAdd.h"
#endif

#if __has_include("UIApplication+YYAdd.h")
#import "UIApplication+YYAdd.h"
#endif

#if __has_include("UIFont+YYAdd.h")
#import "UIFont+YYAdd.h"
#endif

#if __has_include("UIBezierPath+YYAdd.h")
#import "UIBezierPath+YYAdd.h"
#endif

#if __has_include("CALayer+YYAdd.h")
#import "CALayer+YYAdd.h"
#endif

#if __has_include("YYCGUtilities.h")
#import "YYCGUtilities.h"
#endif

#if __has_include("NSObject+YYModel.h")
#import "NSObject+YYModel.h"
#endif

#if __has_include("YYClassInfo.h")
#import "YYClassInfo.h"
#endif

#if __has_include("YYCache.h")
#import "YYCache.h"
#endif

#if __has_include("YYMemoryCache.h")
#import "YYMemoryCache.h"
#endif

#if __has_include("YYDiskCache.h")
#import "YYDiskCache.h"
#endif

#if __has_include("YYKVStorage.h")
#import "YYKVStorage.h"
#endif

#if __has_include("YYImage.h")
#import "YYImage.h"
#endif

#if __has_include("YYFrameImage.h")
#import "YYFrameImage.h"
#endif

#if __has_include("YYSpriteSheetImage.h")
#import "YYSpriteSheetImage.h"
#endif

#if __has_include("YYAnimatedImageView.h")
#import "YYAnimatedImageView.h"
#endif

#if __has_include("YYImageCoder.h")
#import "YYImageCoder.h"
#endif

#if __has_include("YYImageCache.h")
#import "YYImageCache.h"
#endif

#if __has_include("YYWebImageOperation.h")
#import "YYWebImageOperation.h"
#endif

#if __has_include("YYWebImageManager.h")
#import "YYWebImageManager.h"
#endif

#if __has_include("UIImageView+YYWebImage.h")
#import "UIImageView+YYWebImage.h"
#endif

#if __has_include("UIButton+YYWebImage.h")
#import "UIButton+YYWebImage.h"
#endif

#if __has_include("MKAnnotationView+YYWebImage.h")
#import "MKAnnotationView+YYWebImage.h"
#endif

#if __has_include("CALayer+YYWebImage.h")
#import "CALayer+YYWebImage.h"
#endif

#if __has_include("YYLabel.h")
#import "YYLabel.h"
#endif

#if __has_include("YYTextView.h")
#import "YYTextView.h"
#endif

#if __has_include("YYTextAttribute.h")
#import "YYTextAttribute.h"
#endif

#if __has_include("YYTextArchiver.h")
#import "YYTextArchiver.h"
#endif

#if __has_include("YYTextParser.h")
#import "YYTextParser.h"
#endif

#if __has_include("YYTextUtilities.h")
#import "YYTextUtilities.h"
#endif

#if __has_include("YYTextRunDelegate.h")
#import "YYTextRunDelegate.h"
#endif

#if __has_include("YYTextRubyAnnotation.h")
#import "YYTextRubyAnnotation.h"
#endif

#if __has_include("NSAttributedString+YYText.h")
#import "NSAttributedString+YYText.h"
#endif

#if __has_include("NSParagraphStyle+YYText.h")
#import "NSParagraphStyle+YYText.h"
#endif

#if __has_include("UIPasteboard+YYText.h")
#import "UIPasteboard+YYText.h"
#endif

#if __has_include("YYTextLayout.h")
#import "YYTextLayout.h"
#endif

#if __has_include("YYTextLine.h")
#import "YYTextLine.h"
#endif

#if __has_include("YYTextInput.h")
#import "YYTextInput.h"
#endif

#if __has_include("YYTextDebugOption.h")
#import "YYTextDebugOption.h"
#endif

#if __has_include("YYTextContainerView.h")
#import "YYTextContainerView.h"
#endif

#if __has_include("YYTextSelectionView.h")
#import "YYTextSelectionView.h"
#endif

#if __has_include("YYTextMagnifier.h")
#import "YYTextMagnifier.h"
#endif

#if __has_include("YYTextEffectWindow.h")
#import "YYTextEffectWindow.h"
#endif

#if __has_include("YYTextKeyboardManager.h")
#import "YYTextKeyboardManager.h"
#endif

#if __has_include("YYReachability.h")
#import "YYReachability.h"
#endif

#if __has_include("YYGestureRecognizer.h")
#import "YYGestureRecognizer.h"
#endif

#if __has_include("YYFileHash.h")
#import "YYFileHash.h"
#endif

#if __has_include("YYKeychain.h")
#import "YYKeychain.h"
#endif

#if __has_include("YYWeakProxy.h")
#import "YYWeakProxy.h"
#endif

#if __has_include("YYTimer.h")
#import "YYTimer.h"
#endif

#if __has_include("YYTransaction.h")
#import "YYTransaction.h"
#endif

#if __has_include("YYAsyncLayer.h")
#import "YYAsyncLayer.h"
#endif

#if __has_include("YYSentinel.h")
#import "YYSentinel.h"
#endif

#if __has_include("YYDispatchQueuePool.h")
#import "YYDispatchQueuePool.h"
#endif

#if __has_include("YYThreadSafeArray.h")
#import "YYThreadSafeArray.h"
#endif

#if __has_include("YYThreadSafeDictionary.h")
#import "YYThreadSafeDictionary.h"
#endif

#endif
