
@interface SISceneUnderstandingAlgorithm : NSObject {
    SISceneUnderstandingResult * _result;
    SIScaler * _scalerOne;
    SISceneUnderstanding * _segmentation;
}

+ (struct CGSize { double x1; double x2; })outputResolution;

- (void).cxx_destruct;
- (id)initWithInputResolution:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithInputResolution:(struct CGSize { double x1; double x2; })arg1 andComputeEngine:(long long)arg2;
- (void)runWithInput:(struct __CVBuffer { }*)arg1 output:(struct __IOSurface { }*)arg2 confidenceOutput:(struct __IOSurface { }*)arg3 normalsOutput:(struct __IOSurface { }*)arg4;
- (void)runWithInput:(struct __CVBuffer { }*)arg1 output:(struct __IOSurface { }*)arg2 confidenceOutput:(struct __IOSurface { }*)arg3 normalsOutput:(struct __IOSurface { }*)arg4 orientation:(long long)arg5;

@end
