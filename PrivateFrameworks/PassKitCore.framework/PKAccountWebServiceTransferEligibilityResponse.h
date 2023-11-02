
@interface PKAccountWebServiceTransferEligibilityResponse : PKAccountWebServiceResponse {
    unsigned long long  _eligibility;
    NSDecimalNumber * _overflowAmount;
}

@property (nonatomic, readonly) unsigned long long eligibility;
@property (nonatomic, readonly, copy) NSDecimalNumber *overflowAmount;

- (void).cxx_destruct;
- (unsigned long long)eligibility;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 account:(id)arg2 request:(id)arg3;
- (id)overflowAmount;

@end
