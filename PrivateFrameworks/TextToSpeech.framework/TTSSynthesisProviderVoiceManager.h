
@interface TTSSynthesisProviderVoiceManager : NSObject {
    NSObject<OS_dispatch_queue> * _componentQueryQueue;
    <TTSSynthesisProviderVoiceManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _operationQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *componentQueryQueue;
@property (nonatomic) <TTSSynthesisProviderVoiceManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *operationQueue;

+ (bool)_componentIsEqual:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 to:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2;
+ (id)allSynthesisProviderTTSVoices;
+ (id)allSynthesisProviderVoices;
+ (id)componentCache;
+ (void)freeSharedInstance;
+ (void)registerFirstPartyInProcessAudioUnits;
+ (void)resetInMemoryCache;
+ (void)setComponentCache:(id)arg1;
+ (id)sharedInstance;
+ (bool)synthesizerHasEntitlement:(id)arg1 entitlement:(const char *)arg2;
+ (id)voiceCache;

- (void).cxx_destruct;
- (void)_loadVoicesForComponentRecord:(id)arg1 dispatchGroup:(id)arg2;
- (bool)_loadVoicesForComponentWithTimeout:(id)arg1 timeout:(double)arg2 timedOut:(bool*)arg3;
- (void)_loadVoicesForComponents:(id)arg1;
- (void)_reconcileCachedComponents:(id)arg1;
- (void)_reloadVoiceForBundleIdentifierHash:(id)arg1;
- (void)_reloadVoiceForBundleIdentifierPrefix:(id)arg1;
- (id)componentQueryQueue;
- (id)delegate;
- (void)fetchAudioUnitInstanceForVoice:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)operationQueue;
- (void)purgeAndReloadAllComponents;
- (void)reconcileCachedComponents;
- (void)reloadVoicesForBundleIdentifierHash:(id)arg1;
- (void)reloadVoicesForBundleIdentifierPrefix:(id)arg1;
- (void)setComponentQueryQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOperationQueue:(id)arg1;

@end
