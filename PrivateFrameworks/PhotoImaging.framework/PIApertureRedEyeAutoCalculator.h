
@interface PIApertureRedEyeAutoCalculator : NUAutoCalculator {
    NUFaceDetectionRequest * _faceRequest;
}

- (void).cxx_destruct;
- (id)apertureRedEyeResultFromFaceObservations:(id)arg1 imageSize:(struct { long long x1; long long x2; })arg2;
- (void)cancel;
- (void)submit:(id /* block */)arg1;

@end
