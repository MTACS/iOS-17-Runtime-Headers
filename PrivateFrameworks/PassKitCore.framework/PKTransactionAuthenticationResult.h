
@interface PKTransactionAuthenticationResult : NSObject <NSSecureCoding> {
    PKTransactionAuthenticationContext * _authenticationContext;
    NSData * _encryptedPIN;
    NSData * _transactionDetailsSignature;
    NSString * _transactionServiceIdentifier;
    NSData * _userConfirmation;
}

@property (nonatomic, retain) PKTransactionAuthenticationContext *authenticationContext;
@property (nonatomic, copy) NSData *encryptedPIN;
@property (nonatomic, readonly) bool hasDataForAllRequestedAuthenticationMechanisms;
@property (nonatomic, copy) NSData *transactionDetailsSignature;
@property (nonatomic, copy) NSString *transactionServiceIdentifier;
@property (nonatomic, copy) NSData *userConfirmation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authenticationContext;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPIN;
- (bool)hasDataForAllRequestedAuthenticationMechanisms;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransactionAuthenticationResult:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setEncryptedPIN:(id)arg1;
- (void)setTransactionDetailsSignature:(id)arg1;
- (void)setTransactionServiceIdentifier:(id)arg1;
- (void)setUserConfirmation:(id)arg1;
- (id)transactionDetailsSignature;
- (id)transactionServiceIdentifier;
- (id)userConfirmation;

@end
