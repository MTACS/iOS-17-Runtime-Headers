
@interface PKFaceIDBannerHandleRequest : PKBannerHandleRequest <NSSecureCoding>

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)create;
+ (bool)supportsSecureCoding;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)createBannerViewController;

@end
