
@interface PLSidecarFinder : NSObject {
    NSCache * _cachedSidecarURLsByDirectory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NSCache *cachedSidecarURLsByDirectory;

+ (id)_findPotentialSidecarURLsInDirectory:(id)arg1 context:(id)arg2;
+ (bool)_isValidExtensionForSidecar:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)cachedSidecarURLsByDirectory;
- (id)collectSidecarURLsForAssetFilename:(id)arg1 inDirectory:(id)arg2 context:(id)arg3 removeWhenDone:(bool)arg4;
- (id)init;
- (void)reset;
- (void)setCachedSidecarURLsByDirectory:(id)arg1;

@end
