
@interface VOSOutputEventDispatcher : NSObject <VOSOutputEventDispatching> {
    <VOSHapticPack> * _cachedActiveHapticPack;
    <VOSSoundPack> * _cachedActiveSoundPack;
    NSHashTable * _eventHandlers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_activeHapticPack;
- (id)_activeSoundPack;
- (id)_init;
- (void)addEventHandler:(id)arg1;
- (void)removeEventHandler:(id)arg1;
- (void)sendEvent:(id)arg1;
- (bool)shouldPlayHapticForEvent:(id)arg1;
- (bool)shouldPlaySoundForEvent:(id)arg1;

@end
