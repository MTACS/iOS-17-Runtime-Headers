
@interface AXHARingBuffer : NSObject {
    NSMutableArray * _bufferArray;
    long long  _head;
    long long  _size;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)content;
- (unsigned long long)count;
- (id)initWithCount:(unsigned long long)arg1;
- (void)reset;

@end
