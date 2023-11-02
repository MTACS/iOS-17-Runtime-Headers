
@interface GTVMBuffer_tools_diagnostics : NSObject <GTVMBuffer> {
    struct VMBuffer { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; } * _vmBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct VMBuffer { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*vmBuffer;

- (const void*)bytes;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (id)initWithVMBuffer:(struct VMBuffer { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*)arg1;
- (unsigned long long)length;
- (void*)mutableBytes;
- (void)setLength:(unsigned long long)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct VMBuffer { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*)vmBuffer;

@end
