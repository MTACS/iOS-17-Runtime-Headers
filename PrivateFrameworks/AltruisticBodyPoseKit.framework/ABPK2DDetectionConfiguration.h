
@interface ABPK2DDetectionConfiguration : NSObject {
    long long  _abpkDeviceOrientation;
    long long  _algMode;
    NSString * _deviceANEVersion;
    bool  _deviceANEVersionPriorOrEqualToH12;
    long long  _deviceType;
}

@property (nonatomic) long long abpkDeviceOrientation;
@property (nonatomic, readonly) long long algMode;
@property (nonatomic, readonly) NSString *deviceANEVersion;
@property (nonatomic, readonly) bool deviceANEVersionPriorOrEqualToH12;
@property (nonatomic) long long deviceType;

- (void).cxx_destruct;
- (long long)abpkDeviceOrientation;
- (long long)algMode;
- (id)deviceANEVersion;
- (bool)deviceANEVersionPriorOrEqualToH12;
- (long long)deviceType;
- (id)initWithAlgorithmMode:(long long)arg1;
- (id)initWithAlgorithmMode:(long long)arg1 abpkDeviceOrientation:(long long)arg2;
- (void)setAbpkDeviceOrientation:(long long)arg1;
- (void)setDeviceType:(long long)arg1;

@end
