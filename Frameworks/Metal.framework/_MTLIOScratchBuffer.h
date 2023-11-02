
@interface _MTLIOScratchBuffer : NSObject <MTLIOScratchBuffer> {
    struct MTLIOScratchBufferPrivate { struct { struct MTLIOScratchBufferPrivate {} *x_1_1_1; struct MTLIOScratchBufferPrivate {} **x_1_1_2; } x1; id x2; id x3; unsigned long long x4; unsigned long long x5; bool x6; } * _priv;
}

@property (readonly) <MTLBuffer> *buffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)buffer;
- (void)dealloc;
- (id)init:(struct MTLIOScratchBufferPrivate { struct { struct MTLIOScratchBufferPrivate {} *x_1_1_1; struct MTLIOScratchBufferPrivate {} **x_1_1_2; } x1; id x2; id x3; unsigned long long x4; unsigned long long x5; bool x6; }*)arg1;

@end
