
@interface DNDSMemoryCachedBackingStore : NSObject <DNDSBackingStoreDelegate, DNDSCachedBackingStore> {
    <DNDSBackingStoreRecord> * _cache;
    <DNDSCachedBackingStoreDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <DNDSBackingStore> * _underlyingBackingStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSCachedBackingStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
- (id)delegate;
- (id)initWithUnderlyingBackingStore:(id)arg1;
- (void)purgeCache;
- (id)readRecordWithError:(id*)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)writeRecord:(id)arg1 error:(id*)arg2;
- (unsigned long long)writeRecord:(id)arg1 writePartition:(bool)arg2 error:(id*)arg3;

@end
