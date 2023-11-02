
@interface NFPeerPaymentResponse : NSObject <NSSecureCoding> {
    NSDictionary * _certificates;
    NSData * _transactionData;
    NSString * _transactionIdentifier;
}

@property (nonatomic, readonly, retain) NSDictionary *certificates;
@property (nonatomic, readonly, retain) NSData *transactionData;
@property (nonatomic, readonly, retain) NSString *transactionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)transactionData;
- (id)transactionIdentifier;

@end
