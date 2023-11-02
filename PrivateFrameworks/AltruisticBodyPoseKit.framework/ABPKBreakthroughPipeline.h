
@interface ABPKBreakthroughPipeline : NSObject {
    ABPKGestureDetectionPipeline * _gestureDetection;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrequency:(unsigned int)arg1;
- (bool)overlayResult:(id)arg1 OnImage:(struct __CVBuffer { }*)arg2 andGenerateOverlayImage:(struct __CVBuffer { }*)arg3;
- (int)runWithInput:(struct __CVBuffer { }*)arg1 atTimeStamp:(double)arg2 andOutput:(id)arg3;

@end
