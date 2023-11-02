
@interface CVNLPCaptionDecoder : CVNLPCaptionModelBase

- (void)_fill_blob_data:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1 with:(float)arg2;
- (id)computeCaptionForImageWithInputs:(id)arg1 genderOption:(int)arg2;

@end
