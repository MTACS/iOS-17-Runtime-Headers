
@interface ARPersonOcclusionTechnique : ARTechnique {
    struct __CVPixelBufferPool { } * _depthPixelBufferPool;
    bool  _doExpFiltering;
    long long  _lastDeviceOrientation;
    unsigned long long  _minFilterIntermediateBufferSize;
    char * _minFilterIntermediatePooledBuffer;
    bool  _useBoundingBoxes;
    struct shared_ptr<arkit::RobustExpFilter<float>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _varExpFilter;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_fullDescription;
- (int)_minFilterDepthMap:(struct __CVBuffer { }*)arg1 kernelSize:(unsigned long long)arg2 pResultBuffer:(struct __CVBuffer {}**)arg3;
- (void)dealloc;
- (id)init;
- (int)postProcessSegmentation:(struct __CVBuffer { }*)arg1 depthData:(id)arg2 depthDataSource:(long long)arg3 detectionData:(id)arg4 pResultingDepthBuffer:(struct __CVBuffer {}**)arg5;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end
