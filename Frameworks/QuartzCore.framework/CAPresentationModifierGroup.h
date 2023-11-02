
@interface CAPresentationModifierGroup : NSObject {
    unsigned long long  _capacity;
    unsigned long long  _count;
    unsigned int  _localId;
    void * _shmem;
    unsigned long long  _totalSize;
}

@property (readonly) unsigned long long capacity;
@property (readonly) unsigned long long count;
@property (nonatomic) bool updatesAsynchronously;

+ (id)groupWithCapacity:(unsigned long long)arg1;

- (void*)_renderShmem;
- (void)_setLocalContextId:(unsigned int)arg1;
- (unsigned long long)capacity;
- (unsigned long long)count;
- (void)dealloc;
- (void)flush;
- (void)flushLocally;
- (void)flushWithTransaction;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)markWritten:(unsigned long long)arg1;
- (unsigned long long)nextSlotWithPayloadSize:(unsigned long long)arg1;
- (void)resetBitMask;
- (void)setUpdatesAsynchronously:(bool)arg1;
- (void*)shmem;
- (bool)updatesAsynchronously;

@end
