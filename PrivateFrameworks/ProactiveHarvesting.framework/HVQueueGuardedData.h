
@interface HVQueueGuardedData : NSObject {
    unsigned int  _bloomFilterFalsePositives;
    unsigned int  _bloomFilterHits;
    unsigned int  _bloomFilterMisses;
    HVQueueBookmark * _bookmark;
    NSMutableSet * _dequeuedContentIdentifiers;
    unsigned int  _dequeuedCount;
    _PASBloomFilterForWriting * _diskContentBloomFilter;
    BMContentStream * _diskStorage;
    unsigned int  _diskStorageEventCount;
    bool  _diskStorageIsKnownToBeEmpty;
    BMSource * _diskStorageSource;
    unsigned int  _enqueuedCount;
    NSMutableArray * _memoryStorage;
    NSObject<OS_dispatch_source> * _memoryStorageIdleSource;
    short  _memoryStorageLimit;
    NSObject<OS_dispatch_source> * _memoryStorageSigtermSource;
    NSObject<OS_os_transaction> * _memoryStorageTransaction;
}

@property (nonatomic) unsigned int bloomFilterFalsePositives;
@property (nonatomic) unsigned int bloomFilterHits;
@property (nonatomic) unsigned int bloomFilterMisses;
@property (nonatomic, readonly) HVQueueBookmark *bookmark;
@property (nonatomic, readonly) NSMutableSet *dequeuedContentIdentifiers;
@property (nonatomic) unsigned int dequeuedCount;
@property (nonatomic, retain) _PASBloomFilterForWriting *diskContentBloomFilter;
@property (nonatomic, readonly) BMContentStream *diskStorage;
@property (nonatomic) unsigned int diskStorageEventCount;
@property (nonatomic) bool diskStorageIsKnownToBeEmpty;
@property (nonatomic, retain) BMSource *diskStorageSource;
@property (nonatomic) unsigned int enqueuedCount;
@property (nonatomic, readonly) NSMutableArray *memoryStorage;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *memoryStorageIdleSource;
@property (nonatomic, readonly) short memoryStorageLimit;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *memoryStorageSigtermSource;
@property (nonatomic, retain) NSObject<OS_os_transaction> *memoryStorageTransaction;

- (void).cxx_destruct;
- (unsigned int)bloomFilterFalsePositives;
- (unsigned int)bloomFilterHits;
- (unsigned int)bloomFilterMisses;
- (id)bookmark;
- (void)dealloc;
- (id)dequeuedContentIdentifiers;
- (unsigned int)dequeuedCount;
- (id)diskContentBloomFilter;
- (id)diskStorage;
- (unsigned int)diskStorageEventCount;
- (bool)diskStorageIsKnownToBeEmpty;
- (id)diskStorageSource;
- (unsigned int)enqueuedCount;
- (bool)isMemoryStorageFull;
- (id)memoryStorage;
- (id)memoryStorageIdleSource;
- (short)memoryStorageLimit;
- (id)memoryStorageSigtermSource;
- (id)memoryStorageTransaction;
- (void)setBloomFilterFalsePositives:(unsigned int)arg1;
- (void)setBloomFilterHits:(unsigned int)arg1;
- (void)setBloomFilterMisses:(unsigned int)arg1;
- (void)setDequeuedCount:(unsigned int)arg1;
- (void)setDiskContentBloomFilter:(id)arg1;
- (void)setDiskStorageEventCount:(unsigned int)arg1;
- (void)setDiskStorageIsKnownToBeEmpty:(bool)arg1;
- (void)setDiskStorageSource:(id)arg1;
- (void)setEnqueuedCount:(unsigned int)arg1;
- (void)setMemoryStorageTransaction:(id)arg1;

@end
