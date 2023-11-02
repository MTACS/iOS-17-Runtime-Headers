
@interface PKAccountWebServicePaymentsResponse : PKAccountWebServiceResponse {
    NSArray * _payments;
}

@property (nonatomic, readonly, copy) NSArray *payments;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 account:(id)arg2 request:(id)arg3;
- (id)payments;

@end
