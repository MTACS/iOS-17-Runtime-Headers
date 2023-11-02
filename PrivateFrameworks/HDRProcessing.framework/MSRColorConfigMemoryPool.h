
@interface MSRColorConfigMemoryPool : NSObject {
    unsigned int  _allocated;
    NSMutableArray * _array;
    unsigned int  _capacity;
    NSMutableData * _data;
    unsigned int  _released;
    unsigned int  _size;
}

- (void)dealloc;
- (void)dumpPoolState;
- (id)generateColorConfig:(id)arg1 msrCU:(void*)arg2;
- (id)getAlloc;
- (id)initWithCapacity:(unsigned int)arg1 Size:(unsigned int)arg2;

@end
