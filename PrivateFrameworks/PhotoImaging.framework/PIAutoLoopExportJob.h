
@interface PIAutoLoopExportJob : NUVideoExportJob

+ (id)metalRenderer;
+ (bool)shouldUseMetalRenderer;

- (id)autoLoopExportRequest;
- (id)initWithAutoLoopExportRequest:(id)arg1;
- (id)initWithVideoExportRequest:(id)arg1;
- (id)renderer:(out id*)arg1;
- (bool)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 createCustomMetadata:(bool)arg4 geometryTransform:(id)arg5 inputSize:(struct CGSize { double x1; double x2; })arg6 outputSize:(struct CGSize { double x1; double x2; })arg7 error:(out id*)arg8;

@end
