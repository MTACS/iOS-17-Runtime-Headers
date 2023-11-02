
@interface MapsSuggestionsFirstUnlock : MapsSuggestionsFirstUnlockBase <GEOKeyBagProtectedDataDidBecomeAvailableObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (bool)hasDeviceBeenUnlocked;
- (id)init;
- (void)protectedDataDidBecomeAvailable:(id)arg1;

@end
