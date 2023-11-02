
@interface STSPeerPaymentTransferRequest : STSPaymentRequestBase {
    NSString * _appleTransactionHash;
    NSData * _nonce;
    NSString * _publicTransactionHash;
}

@property (nonatomic, retain) NSString *appleTransactionHash;
@property (nonatomic, retain) NSData *nonce;
@property (nonatomic, retain) NSString *publicTransactionHash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleTransactionHash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransactionAmount:(id)arg1 currencyCode:(id)arg2 countryCode:(id)arg3 transactionDate:(id)arg4 appleTransactionHash:(id)arg5 publicTransactionHash:(id)arg6 nonce:(id)arg7;
- (id)nonce;
- (id)publicTransactionHash;
- (void)setAppleTransactionHash:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPublicTransactionHash:(id)arg1;
- (id)toNFPeerPaymentTransferRequest;

@end
