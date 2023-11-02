
@interface ANSTVideoMaskRefineAlgorithmV1 : ANSTVideoMaskRefineAlgorithm {
    ANSTVideoMaskRefineAlgorithmConfiguration * _config;
    bool  _isFirstFrame;
    struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; } * _lastPersonMask;
    ANSTBaseNetworkEspresso * _network;
    struct __CVPixelBufferPool { } * _outputBufferPool_256x192;
    struct OpaqueVTPixelTransferSession { } * _pixelTransferSession;
    bool  _readyForInference;
    struct __CVBuffer { } * _resizedInputBuffer;
}

+ (unsigned long long)_version;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)_createCVPixelBuffer_256x192_Float32_fromEspressoBufferFloat32:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1;
- (id)_networkResult;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (bool)prepareWithError:(id*)arg1;
- (id)resultForPixelBuffer:(struct __CVBuffer { }*)arg1 coarseSegementationMasks:(id)arg2 error:(id*)arg3;
- (void)undoPrepareSideEffects;

@end
