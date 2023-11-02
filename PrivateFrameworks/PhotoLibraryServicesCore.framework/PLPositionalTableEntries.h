
@interface PLPositionalTableEntries : NSObject {
    void ** _buffers;
    unsigned long long  _entryLength;
    NSIndexSet * _readIndexes;
}

@property (nonatomic, readonly) unsigned long long entryLength;
@property (nonatomic, readonly) NSIndexSet *readIndexes;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)entryLength;
- (void)enumerateIndexes:(id /* block */)arg1;
- (id)initWithBuffers:(void*)arg1 forIndexes:(id)arg2 entryLength:(unsigned long long)arg3;
- (id)readIndexes;

@end
