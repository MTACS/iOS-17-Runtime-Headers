
@interface VGFaceFittingFrameSelector : NSObject {
    NSMutableDictionary * _expressionsSelector;
    NSDictionary * _facekitSemantics;
    unsigned long long  _frameCount;
    VGFaceCaptureOptions * _options;
    VGFrameSelector * _pitchSelector;
    bool  _selectionCompleted;
    VGFrameSelector * _yawSelector;
}

- (void).cxx_destruct;
- (float)_calculateFacePitchWithRotationMatrix:(const void*)arg1;
- (float)_calculateFaceYawWithRotationMatrix:(const void*)arg1;
- (id)addPoseWithCaptureData:(id)arg1 tracking:(id)arg2 externalTracking:(bool)arg3;
- (id)allPoseSelectors;
- (id)currentState;
- (id)enrolledPoses;
- (id)expressionSelectors;
- (id)finish;
- (id)finishAndWriteToPath:(id)arg1;
- (id)initWithOptions:(id)arg1 faceKitSemantics:(struct __CFDictionary { }*)arg2;
- (id)neutralSelectors;
- (id)posesFromSelectors:(id)arg1;
- (bool)startFaceExpressionCapture:(unsigned long long)arg1;

@end
