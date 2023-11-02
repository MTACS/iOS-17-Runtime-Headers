
@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse {
    NSDecimalNumber * _amount;
    NSDictionary * _instructionsDictionary;
    NSString * _secureElementIdentifier;
}

@property (nonatomic, readonly) NSDecimalNumber *amount;
@property (nonatomic, readonly) NSDictionary *instructionsDictionary;
@property (nonatomic, readonly) NSString *secureElementIdentifier;

- (void).cxx_destruct;
- (id)amount;
- (id)initWithData:(id)arg1;
- (id)instructionsDictionary;
- (id)secureElementIdentifier;

@end
