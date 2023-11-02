
@interface PKStandaloneTransactionBannerHandleRequest : PKBannerHandleRequest <NSSecureCoding> {
    NSString * _passUniqueIdentifier;
    long long  _transactionType;
    bool  _walletForeground;
}

@property (nonatomic, readonly, copy) NSString *passUniqueIdentifier;
@property (nonatomic, readonly) long long transactionType;
@property (getter=isWalletForeground, nonatomic, readonly) bool walletForeground;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)createForPassUniqueIdentifier:(id)arg1 transactionType:(long long)arg2 walletForeground:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isWalletForeground;
- (id)passUniqueIdentifier;
- (long long)transactionType;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)createBannerViewController;

@end
