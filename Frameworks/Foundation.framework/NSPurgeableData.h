
@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
    int  _accessCount;
    unsigned long long  _length;
    struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; bool x4; bool x5; unsigned long long x6; } * _reserved;
}

- (void)_destroyMemory;
- (bool)beginContentAccess;
- (const void*)bytes;
- (void)dealloc;
- (id)description;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (id)init;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(id /* block */)arg4;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)isContentDiscarded;
- (unsigned long long)length;
- (void*)mutableBytes;
- (void)setLength:(unsigned long long)arg1;

@end
