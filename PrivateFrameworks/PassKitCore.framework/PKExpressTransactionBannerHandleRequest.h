
@interface PKExpressTransactionBannerHandleRequest : PKBannerHandleRequest <NSSecureCoding> {
    NSString * _passUniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSString *passUniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)createForPassUniqueIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)passUniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)createBannerViewController;

@end
