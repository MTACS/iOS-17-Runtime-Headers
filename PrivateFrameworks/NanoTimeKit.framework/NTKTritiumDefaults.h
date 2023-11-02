
@interface NTKTritiumDefaults : NSObject {
    NSUserDefaults * _defaults;
    NPSDomainAccessor * _domainAccessor;
    NSHashTable * _observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_domainAccessor;
- (void)_observe;
- (id)_privateBundleIDs;
- (id)_privateSiriCardIDs;
- (void)_synchronize;
- (void)addObserver:(id)arg1;
- (bool)allBundleIDsPrivateInTritium;
- (id)init;
- (bool)isBundleIdPrivateInTritium:(id)arg1;
- (bool)isSiriPlatterPrivateInTritium:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reload;
- (void)removeObserver:(id)arg1;
- (void)setAllBundleIDsPrivateInTritium:(bool)arg1;
- (void)setBundleIDs:(id)arg1 privateInTritium:(bool)arg2;
- (void)setSiriPlatters:(id)arg1 privateInTritium:(bool)arg2;

@end
