
@interface NUGeometryJob : NURenderJob

- (id)geometryRequest;
- (id)result;
- (id)scalePolicy;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsRenderStage;

@end
