
@interface ABPKImagePreProcessing : NSObject {
    ABPKPaddingParams * _paddingParameters;
    double  _startConvertARGBToBGRA;
    double  _startConvertGrayScaleToBGRA;
    double  _startConvertYCbCrToBGRA;
    double  _startPadding;
    double  _startScale;
    double  _timeConvertARGBToBGRA;
    double  _timeConvertGrayScaleToBGRA;
    double  _timeConvertYCbCrToBGRA;
    double  _timePadding;
    double  _timeScale;
    struct OpaqueVTPixelTransferSession { } * _vtPixelTransferSession;
}

- (void).cxx_destruct;
- (void)_endARGBToBGRASignpost;
- (void)_endARGBToRGBASignpost;
- (void)_endGrayToBGRASignpost;
- (void)_endPaddingSignpost;
- (void)_endScaleSignpost;
- (void)_endYCbCrToARGBSignpost;
- (void)_startARGBToBGRASignpost;
- (void)_startARGBToRGBASignpost;
- (void)_startGrayToBGRASignpost;
- (void)_startPaddingSignpost;
- (void)_startScaleSignpost;
- (void)_startYCbCrToARGBSignpost;
- (void)dealloc;
- (id)initWithPreProcessingParams:(id)arg1;
- (void)logProfilingDetails;
- (int)preprocessColorImage:(struct __CVBuffer { }*)arg1 outputBuffer:(struct __CVBuffer { }*)arg2;
- (int)preprocessData:(struct __CVBuffer { }*)arg1 outputBuffer:(struct __CVBuffer { }*)arg2;
- (int)preprocessGrayscaleImage:(struct __CVBuffer { }*)arg1 outputBuffer:(struct __CVBuffer { }*)arg2;

@end
