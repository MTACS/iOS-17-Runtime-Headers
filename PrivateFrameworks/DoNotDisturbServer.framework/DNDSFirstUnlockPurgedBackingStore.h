
@interface DNDSFirstUnlockPurgedBackingStore : NSObject <DNDSCachedBackingStore, DNDSCachedBackingStoreDelegate, DNDSKeybagStateObserver> {
    <DNDSCachedBackingStoreDelegate> * _delegate;
    <DNDSKeybagStateProviding> * _keybag;
    <DNDSCachedBackingStore> * _underlyingBackingStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSCachedBackingStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
- (void)cachedBackingStoreDidPurgeCache:(id)arg1;
- (id)delegate;
- (id)initWithUnderlyingBackingStore:(id)arg1 keybag:(id)arg2;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (void)purgeCache;
- (id)readRecordWithError:(id*)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)writeRecord:(id)arg1 error:(id*)arg2;
- (unsigned long long)writeRecord:(id)arg1 writePartition:(bool)arg2 error:(id*)arg3;

@end
