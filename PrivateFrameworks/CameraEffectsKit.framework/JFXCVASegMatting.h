
@interface JFXCVASegMatting : JFXMatting {
    JFXMatting * _impl;
}

+ (struct CGSize { double x1; double x2; })mattingDepthInputSize;

- (void).cxx_destruct;
- (void)alphaMatteForFrameSet:(id)arg1 mattingPerfState:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initForFrameSet:(id)arg1;
- (bool)isValidForCameraFrameSet:(id)arg1;

@end
