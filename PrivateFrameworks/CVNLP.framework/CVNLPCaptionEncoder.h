
@interface CVNLPCaptionEncoder : CVNLPCaptionModelBase {
    unsigned long long  data_dim;
}

- (unsigned long long)_blob_size:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1;
- (void)_fill_blob_data:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1 with:(float)arg2;
- (void)computeCaptionForImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 outputs:(id*)arg2;
- (void)computeCaptionForPixelBuffer:(struct __CVBuffer { }*)arg1 outputs:(id*)arg2;

@end
