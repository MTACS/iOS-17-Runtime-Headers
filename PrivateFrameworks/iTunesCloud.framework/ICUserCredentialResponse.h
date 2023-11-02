
@interface ICUserCredentialResponse : NSObject {
    ICUserIdentityProperties * _iCloudIdentityProperties;
    ICUserIdentityProperties * _identityProperties;
}

@property (nonatomic, copy) ICUserIdentityProperties *iCloudIdentityProperties;
@property (nonatomic, copy) ICUserIdentityProperties *identityProperties;

- (void).cxx_destruct;
- (id)iCloudIdentityProperties;
- (id)identityProperties;
- (void)setICloudIdentityProperties:(id)arg1;
- (void)setIdentityProperties:(id)arg1;

@end
