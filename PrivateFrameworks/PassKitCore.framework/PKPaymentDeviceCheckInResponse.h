
@interface PKPaymentDeviceCheckInResponse : PKPaymentWebServiceResponse {
    long long  _action;
}

@property (nonatomic) long long action;

- (long long)action;
- (id)initWithData:(id)arg1;
- (void)setAction:(long long)arg1;

@end
