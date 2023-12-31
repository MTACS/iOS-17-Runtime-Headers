
@protocol NUMutableBuffer <NUBuffer>

@required

- (void*)mutableBytes;
- (void*)mutableBytesAtPoint:(struct { long long x1; long long x2; })arg1;
- (CIRenderDestination *)newRenderDestination;

@end
