
@interface PKPaymentAvailableDevicesResponse : PKPaymentWebServiceResponse {
    NSDictionary * _devices;
}

@property (nonatomic, copy) NSDictionary *devices;

- (void).cxx_destruct;
- (id)devices;
- (id)initWithData:(id)arg1;
- (void)setDevices:(id)arg1;

@end
