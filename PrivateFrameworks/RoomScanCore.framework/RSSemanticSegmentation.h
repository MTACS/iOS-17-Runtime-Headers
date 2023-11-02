
@interface RSSemanticSegmentation : NSObject {
    RSCVPixelRotate * _cvRotate180;
    RSCVPixelRotate * _cvRotate180r;
    RSCVPixelRotate * _cvRotate270;
    RSCVPixelRotate * _cvRotate270r;
    RSCVPixelRotate * _cvRotate90;
    RSCVPixelRotate * _cvRotate90r;
    long long  _deviceOrientation;
    bool  _initRotater;
    bool  _initSegModel;
    SISceneSegmentationData * _semResultData;
    SISceneSegmentationNetworkConfiguration * _semanticConfig;
    long long  _semanticModel;
    SISceneSegmentationAlgorithm * _siSceneSegmentationAlgorithm;
}

- (void).cxx_destruct;
- (id)init;

@end
