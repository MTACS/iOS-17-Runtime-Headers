
@interface NUHistogramRenderJob : NURenderJob {
    NUImageHistogram * _histogram;
    <NUPurgeableStorage> * _renderDestination;
    CIRenderTask * _renderTask;
    <NUScalePolicy> * _scalePolicy;
    NUPurgeableStoragePool * _storagePool;
}

- (void).cxx_destruct;
- (id)cacheKey;
- (void)cleanUp;
- (bool)complete:(out id*)arg1;
- (id)histogramRequest;
- (id)initWithHistogramRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
