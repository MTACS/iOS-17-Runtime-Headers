
@interface AFBundleResourceManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _resourceURLProvidersByIdentifier;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)URLForResource:(id)arg1;
- (id)URLForSoundID:(long long)arg1;
- (id)init;
- (id)resourceForSoundID:(long long)arg1;

@end
