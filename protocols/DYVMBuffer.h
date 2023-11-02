
@protocol DYVMBuffer <NSObject>

@required

- (const void*)bytes;
- (id)initWithLength:(unsigned long long)arg1;
- (unsigned long long)length;
- (void*)mutableBytes;
- (<DYVMBufferSubRegion> *)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
