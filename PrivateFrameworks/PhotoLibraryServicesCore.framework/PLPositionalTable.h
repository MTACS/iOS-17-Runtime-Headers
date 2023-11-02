
@interface PLPositionalTable : NSObject {
    int  _descriptor;
    long long  _entryCapacity;
    unsigned long long  _entryLength;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _expansionLock;
    bool  _flushAfterWrite;
    bool  _isReadOnly;
    NSString * _path;
    struct tagPLPositionalTableMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; int x3; void *x4; void *x5; unsigned long long x6; } * _pool;
    bool  _readOnly;
}

@property (nonatomic) int descriptor;
@property (nonatomic) long long entryCapacity;
@property (nonatomic) unsigned long long entryLength;
@property (nonatomic, readonly) long long fileLength;
@property (nonatomic) bool flushAfterWrite;
@property (nonatomic) bool isReadOnly;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, readonly) struct tagPLPositionalTableMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; int x3; void *x4; void *x5; unsigned long long x6; }*pool;
@property (getter=isReadOnly, nonatomic, readonly) bool readOnly;

- (void).cxx_destruct;
- (bool)_increaseEntryCapacityIfNeededToStoreIndex:(long long)arg1;
- (bool)_setEntryCapacity:(long long)arg1;
- (void)dealloc;
- (bool)deleteEntryAtIndex:(unsigned long long)arg1;
- (int)descriptor;
- (Class)entriesClass;
- (long long)entryCapacity;
- (unsigned long long)entryLength;
- (long long)fileLength;
- (id)fileStatistics;
- (void)flush;
- (bool)flushAfterWrite;
- (id)initWithPath:(id)arg1 readOnly:(bool)arg2 entryLength:(unsigned long long)arg3;
- (bool)isEmptyAtIndex:(unsigned long long)arg1;
- (bool)isReadOnly;
- (bool)isReadOnly;
- (id)path;
- (struct tagPLPositionalTableMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; int x3; void *x4; void *x5; unsigned long long x6; }*)pool;
- (bool)readDataAtIndex:(unsigned long long)arg1 intoPoolNode:(struct tagPLPositionalTableMemoryPoolNode { void *x1; struct tagPLPositionalTableMemoryPool {} *x2; bool x3; struct tagPLPositionalTableMemoryPoolNode {} *x4; }*)arg2 bytesRead:(unsigned long long*)arg3;
- (id)readEntriesAtIndexes:(id)arg1;
- (void)setDescriptor:(int)arg1;
- (void)setEntryCapacity:(long long)arg1;
- (void)setEntryLength:(unsigned long long)arg1;
- (void)setFlushAfterWrite:(bool)arg1;
- (void)setIsReadOnly:(bool)arg1;
- (void)setPath:(id)arg1;
- (void)touchEntriesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)writeEntryData:(id)arg1 toIndex:(unsigned long long)arg2;

@end
