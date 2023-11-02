
@interface CRKWiProxDeviceRegistration : NSObject {
    NSDictionary * _devices;
    NSDictionary * _options;
}

@property (nonatomic, copy) NSDictionary *devices;
@property (nonatomic, copy) NSDictionary *options;

- (void).cxx_destruct;
- (id)description;
- (id)devices;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)options;
- (void)setDevices:(id)arg1;
- (void)setOptions:(id)arg1;

@end
