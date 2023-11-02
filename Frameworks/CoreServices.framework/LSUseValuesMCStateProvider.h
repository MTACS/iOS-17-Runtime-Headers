
@interface LSUseValuesMCStateProvider : NSObject <LSMCStateProvider> {
    bool  _allowlistEnabled;
    NSSet * _allowlistedBundles;
    NSSet * _restrictedBundles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allowlistedBundleIDs;
- (bool)isAllowlistEnabled;
- (id)restrictedBundleIDs;

@end
