
@protocol ARInternalSessionObserver <ARSessionDelegate>

@optional

- (void)session:(ARSession *)arg1 didChangeState:(unsigned long long)arg2;
- (void)session:(ARSession *)arg1 didUpdateExternalAnchors:(NSArray *)arg2;
- (void)session:(ARSession *)arg1 didUpdateSpatialMappingPointClouds:(NSArray *)arg2;
- (void)session:(ARSession *)arg1 requestedRunWithConfiguration:(ARConfiguration *)arg2 options:(unsigned long long)arg3;
- (void)session:(ARSession *)arg1 willRunWithConfiguration:(ARConfiguration *)arg2;
- (void)sessionShouldAttemptRelocalization:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ARSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
