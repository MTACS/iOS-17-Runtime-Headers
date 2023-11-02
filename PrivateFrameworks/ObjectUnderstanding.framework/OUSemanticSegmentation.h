
@interface OUSemanticSegmentation : NSObject {
    bool  _initRotater;
    bool  _initSegModel;
    OUCVPixelBufferRotate * cvRotate180;
    OUCVPixelBufferRotate * cvRotate180r;
    OUCVPixelBufferRotate * cvRotate270;
    OUCVPixelBufferRotate * cvRotate270r;
    OUCVPixelBufferRotate * cvRotate90;
    OUCVPixelBufferRotate * cvRotate90r;
    long long  deviceOrientation;
    SISceneSegmentationData * semResultData;
    SISceneSegmentationNetworkConfiguration * semanticConfig;
    long long  semanticModel;
    SISceneSegmentationAlgorithm * siSceneSegmentationAlgorithm;
}

- (void).cxx_destruct;
- (struct __CVBuffer { }*)generateSemanticOnWideCameraWithFrame:(id)arg1;
- (id)init;
- (bool)setupRotater:(id)arg1;

@end
