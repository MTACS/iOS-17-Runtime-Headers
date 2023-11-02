
@interface NTKFaceBundleManager : NSObject {
    NSArray * _cachedLookup;
    NTKFaceBundleLoader * _loader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lookupLock;
    NSMutableDictionary * _progressiveBundleIDLookup;
    NSMutableDictionary * _progressiveStyleLookup;
}

@property (nonatomic, readonly) NTKFaceBundleLoader *loader;
@property (nonatomic, readonly) NSMutableDictionary *progressiveBundleIDLookup;
@property (nonatomic, readonly) NSMutableDictionary *progressiveStyleLookup;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_generateLookupsIfNecessary;
- (id)_init;
- (void)_resetCaches;
- (void)argonUpdated:(id)arg1;
- (void)dealloc;
- (void)enumerateArgonKeyDescriptorsWithBlock:(id /* block */)arg1;
- (void)enumerateFaceBundlesOnDevice:(id)arg1 includingLegacy:(bool)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateFaceBundlesOnDevice:(id)arg1 withBlock:(id /* block */)arg2;
- (id)faceBundleForBundleIdentifier:(id)arg1 onDevice:(id)arg2;
- (id)faceBundleForBundleIdentifier:(id)arg1 onDevice:(id)arg2 forMigration:(bool)arg3;
- (id)faceBundleForFaceStyle:(long long)arg1 onDevice:(id)arg2;
- (bool)loadKeyDescriptor:(id)arg1;
- (id)loader;
- (id)progressiveBundleIDLookup;
- (id)progressiveStyleLookup;

@end
