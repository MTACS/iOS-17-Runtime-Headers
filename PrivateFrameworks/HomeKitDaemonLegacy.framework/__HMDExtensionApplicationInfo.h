
@interface __HMDExtensionApplicationInfo : __HMDBundleApplicationInfo {
    HMDApplicationInfo * _hostApplicationInfo;
}

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)hostApplicationInfo;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInstalled;
- (id)vendorIdentifier;

@end
