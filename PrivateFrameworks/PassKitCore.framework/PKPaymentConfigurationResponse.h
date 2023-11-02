
@interface PKPaymentConfigurationResponse : PKPaymentWebServiceResponse {
    NSDictionary * _configuration;
    NSData * _data;
    NSData * _signature;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSDictionary *configuration;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSData *signature;
@property (nonatomic, readonly, copy) NSString *version;

- (void).cxx_destruct;
- (id)configuration;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)signature;
- (id)version;

@end
