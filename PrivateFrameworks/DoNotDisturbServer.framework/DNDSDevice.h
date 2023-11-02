
@interface DNDSDevice : DNDDevice {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

+ (id)currentDevice;

- (void).cxx_destruct;
- (id)_initWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2 identifier:(id)arg3 frameworkVersion:(struct { long long x1; long long x2; long long x3; })arg4;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;

@end
