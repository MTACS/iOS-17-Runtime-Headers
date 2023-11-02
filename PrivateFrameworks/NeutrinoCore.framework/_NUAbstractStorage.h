
@interface _NUAbstractStorage : NSObject <NUImageStorage> {
    NUPixelFormat * _format;
    struct { 
        long long width; 
        long long height; 
    }  _size;
    long long  _sizeInBytes;
    NUMutableRegion * _validRegion;
    NUColorSpace * colorSpace;
}

@property (retain) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property struct { long long x1; long long x2; } size;
@property long long sizeInBytes;
@property (readonly) Class superclass;
@property (readonly) NURegion *validRegion;

- (void).cxx_destruct;
- (void)_resetSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (void)assertIsValidInRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)assertIsValidInRegion:(id)arg1;
- (id)colorSpace;
- (long long)copyFromStorage:(id)arg1 region:(id)arg2;
- (long long)fillBufferWithPattern4:(unsigned int)arg1;
- (id)format;
- (id)init;
- (void)invalidate;
- (bool)isValidInRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (bool)isValidInRegion:(id)arg1;
- (void)provideBuffer:(id /* block */)arg1;
- (void)provideMutableBuffer:(id /* block */)arg1;
- (long long)readBufferInRegion:(id)arg1 block:(id /* block */)arg2;
- (void)setColorSpace:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setSize:(struct { long long x1; long long x2; })arg1;
- (void)setSizeInBytes:(long long)arg1;
- (struct { long long x1; long long x2; })size;
- (long long)sizeInBytes;
- (long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(id /* block */)arg3;
- (long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(id /* block */)arg2;
- (long long)useAsCVPixelBufferWithBlock:(id /* block */)arg1;
- (id)validRegion;
- (void)validateRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)validateRegion:(id)arg1;
- (long long)writeBufferInRegion:(id)arg1 block:(id /* block */)arg2;

@end
