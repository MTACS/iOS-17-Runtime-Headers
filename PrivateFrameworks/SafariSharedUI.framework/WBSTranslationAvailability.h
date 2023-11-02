
@interface WBSTranslationAvailability : NSObject <WBSTranslationAvailabilityProviding> {
    <WBSTranslationAvailabilityProviding> * _availabilityProvider;
    id /* block */  _availableInCurrentRegionCompletionHandler;
    id /* block */  _availableLocalePairsCompletionHandler;
    NSArray * _cachedAvailableLocalePairs;
    NSNumber * _cachedTranslationAvailableInCurrentRegion;
    NSArray * _cachedUserPreferredLocales;
    bool  _hasCheckedAvailableLocalePairs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *userPreferredTargetLocales;

+ (id)sharedAvailability;

- (void).cxx_destruct;
- (void)_didUpdateSupportedRegionAndLocalePairs;
- (id)_initWithAvailabilityProvider:(id)arg1;
- (void)_updateCachedValues;
- (void)getAllTargetLocalesInUserPreferredOrderWithCompletionHandler:(id /* block */)arg1;
- (void)getAvailableLocalePairsWithCompletionHandler:(id /* block */)arg1;
- (void)getTranslationAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)isTranslationSupportedForCurrentRegionWithCompletionHandler:(id /* block */)arg1;
- (void)supportedLocalePairsWithCompletionHandler:(id /* block */)arg1;
- (id)userPreferredTargetLocales;

@end
