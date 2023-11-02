
@interface NUImageBufferRenderJob : NUImageRenderJob

- (id)imageAccumulationNodeWithImageSize:(struct { long long x1; long long x2; })arg1 tileSize:(struct { long long x1; long long x2; })arg2 borderSize:(struct { long long x1; long long x2; })arg3 format:(id)arg4 colorSpace:(id)arg5;
- (id)renderBufferOfSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (id)result;

@end
