
@interface __HMDApplicationInfo : __HMDBundleApplicationInfo {
    bool  _installed;
    NSData * _vendorIdentifier;
}

- (void).cxx_destruct;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInstalled;
- (id)vendorIdentifier;

@end
