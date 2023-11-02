
@interface __HMDBundleApplicationInfo : HMDApplicationInfo {
    LSPropertyList * _entitlements;
}

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isEntitledForAPIAccess;
- (bool)isEntitledForSPIAccess;

@end
