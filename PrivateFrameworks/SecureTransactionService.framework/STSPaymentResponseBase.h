
@interface STSPaymentResponseBase : NSObject <NSSecureCoding> {
    NSDictionary * _certificates;
    NSData * _transactionData;
    NSString * _transactionIdentifier;
}

@property (nonatomic, readonly) NSDictionary *certificates;
@property (nonatomic, readonly) NSData *transactionData;
@property (nonatomic, readonly) NSString *transactionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificates;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromNFECommercePaymentResponse:(id)arg1;
- (id)initFromNFPeerPaymentResponse:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)transactionData;
- (id)transactionIdentifier;

@end
