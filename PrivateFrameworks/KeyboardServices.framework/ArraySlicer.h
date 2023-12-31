
@interface ArraySlicer : NSObject {
    NSArray * _array;
    unsigned long long  _count;
    unsigned long long  _offset;
    unsigned long long  _sliceSize;
}

@property (nonatomic, readonly) unsigned long long remaining;

- (void).cxx_destruct;
- (id)consumed;
- (id)initWithArray:(id)arg1 sliceSize:(unsigned long long)arg2;
- (id)nextSlice;
- (unsigned long long)remaining;
- (id)unconsumed;

@end
