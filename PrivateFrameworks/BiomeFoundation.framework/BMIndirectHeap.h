
@interface BMIndirectHeap : NSObject {
    unsigned long long * _array;
    unsigned long long  _count;
    id /* block */  _isAscending;
    unsigned long long  _size;
}

@property unsigned long long*array;
@property unsigned long long count;
@property (copy) id /* block */ isAscending;
@property unsigned long long size;

+ (id)new;

- (void).cxx_destruct;
- (void)add:(unsigned long long)arg1;
- (unsigned long long*)array;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithHeapSize:(unsigned long long)arg1 isAscending:(id /* block */)arg2;
- (id /* block */)isAscending;
- (unsigned long long)pop;
- (void)reset;
- (void)setArray:(unsigned long long*)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setIsAscending:(id /* block */)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)top;

@end
