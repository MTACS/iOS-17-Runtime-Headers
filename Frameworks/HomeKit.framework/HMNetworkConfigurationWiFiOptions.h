
@interface HMNetworkConfigurationWiFiOptions : HMFObject {
    long long  _credentialType;
    bool  _rotate;
}

@property (nonatomic, readonly) long long credentialType;
@property (nonatomic) bool rotate;

- (long long)credentialType;
- (id)description;
- (id)initWithCredentialType:(long long)arg1;
- (bool)rotate;
- (void)setRotate:(bool)arg1;

@end
