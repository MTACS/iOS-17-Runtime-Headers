
@interface ABPKAlgorithmRA : NSObject {
    ABPKAlgorithm * _abpkAlgorithm;
    ABPKCameraParams * _abpkCameraParams;
    ABPKAlgorithmParams * _algParams;
    ABPKAlgInput * _algorithmInput;
    ABPKAlgOutput * _algorithmOutput;
    ABPKCropParams * _cropParameters;
    long long  _exitPoint;
    ABPKImagePreProcessingParams * _imagePreProcessingParams;
    NSString * _imagePreProcessingType;
    ABPKImagePreProcessing * _imagePreprocessor;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputResolution;
    struct __CVBuffer { } * _mlImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _mlResolution;
    ABPKPaddingParams * _paddingParameters;
    struct CGSize { 
        double width; 
        double height; 
    }  _regImageDimensions;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _regIntrinsics;
    NSString * _saveDirectory;
}

- (void).cxx_destruct;
- (void)_endABPKAlgoInitSignpost;
- (void)_endExecuteAlgorithmSignpost;
- (void)_endImagePreprocessingSignpost;
- (void)_startABPKAlgoInitSignpost;
- (void)_startExecuteAlgorithmSignpost;
- (void)_startImagePreprocessingSignpost;
- (void)computeRootTransforms:(id)arg1 withVioPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 withVioPoseValidity:(bool)arg3;
- (void)dealloc;
- (id)initWithCameraParams:(id)arg1;
- (id)initWithCameraParams:(id)arg1 andAlgorithmMode:(long long)arg2;
- (int)preprocessInputImage:(struct __CVBuffer { }*)arg1;
- (void)runABPKAlgorithmWithInputData:(id)arg1 andGetOutput:(id)arg2;
- (void)saveInputData:(id)arg1 andOutputData:(id)arg2 ToDir:(id)arg3 withFileNamePrefix:(id)arg4;
- (void)setExitPoint:(long long)arg1;

@end
