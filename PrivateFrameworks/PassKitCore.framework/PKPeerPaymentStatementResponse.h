
@interface PKPeerPaymentStatementResponse : PKPeerPaymentWebServiceResponse {
    NSString * _emailAddress;
}

@property (nonatomic, readonly, copy) NSString *emailAddress;

- (void).cxx_destruct;
- (id)emailAddress;
- (id)initWithData:(id)arg1;

@end
