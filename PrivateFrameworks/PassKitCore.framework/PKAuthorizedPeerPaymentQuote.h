
@interface PKAuthorizedPeerPaymentQuote : NSObject <NSSecureCoding> {
    NSDictionary * _certificates;
    PKContact * _contact;
    PKPeerPaymentQuote * _peerPaymentQuote;
    NSData * _transactionData;
}

@property (nonatomic, readonly) NSDictionary *certificates;
@property (nonatomic, retain) PKContact *contact;
@property (nonatomic, readonly) PKPeerPaymentQuote *peerPaymentQuote;
@property (nonatomic, readonly) NSData *transactionData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificates;
- (id)contact;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuote:(id)arg1 transactionData:(id)arg2 certificates:(id)arg3;
- (id)peerPaymentQuote;
- (void)setContact:(id)arg1;
- (id)transactionData;

@end