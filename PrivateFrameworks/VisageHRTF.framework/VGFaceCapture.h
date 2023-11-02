
@interface VGFaceCapture : NSObject {
    bool  _captureComplete;
    VGFaceFittingFrameSelector * _faceFrameSelector;
    VGFaceKitTracker * _faceTracker;
    VGFaceCaptureOptions * _options;
    NSString * _rootPath;
    bool  _writeDebugFiles;
}

@property (nonatomic, retain) NSString *rootPath;

- (void).cxx_destruct;
- (id)currentState;
- (id)enrolledPoses;
- (id)initWithOptions:(id)arg1;
- (bool)processWithCaptureData:(id)arg1 callback:(id /* block */)arg2;
- (id)rootPath;
- (void)setRootPath:(id)arg1;
- (bool)startFaceExpressionCapture:(unsigned long long)arg1;

@end
