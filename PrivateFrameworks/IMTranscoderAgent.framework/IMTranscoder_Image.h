
@interface IMTranscoder_Image : IMTranscoder {
    double  _overrideJPEGCompressionQuality;
}

@property (nonatomic) double overrideJPEGCompressionQuality;

+ (bool)_canConvertPNGToJPEG:(struct CGImage { }*)arg1;
+ (bool)_imageContainsTranslucentPixels:(struct CGImage { }*)arg1;
+ (id)excludedUTIs;
+ (unsigned long long)findLargerDimensionFromImage:(struct CGImageSource { }*)arg1 withProperties:(id)arg2 toWidth:(id*)arg3 toHeight:(id*)arg4;
+ (id)findOrientationFromProperties:(id)arg1;
+ (id)supportedUTIs;

- (id)_checkAndSaveImageData:(id)arg1 sourceURL:(id)arg2 inFormat:(struct __CFString { }*)arg3 withMaxByteSize:(unsigned long long)arg4 actualSize:(unsigned long long*)arg5 usedLengthIndex:(int*)arg6 currentIndex:(int)arg7;
- (unsigned long long)_getImageWidth:(struct CGImageSource { }*)arg1;
- (id)_getScaleFactorArray:(id)arg1 transferURL:(id)arg2 outputURLs:(id)arg3;
- (void)_imMetricsCollectorForLQMQualityEstimatorModeImageTypeHEIC:(unsigned long long)arg1 shouldUseQualityEstimatorModel:(bool)arg2 inputImageFeatures:(id)arg3 metricsDict:(id)arg4;
- (id)_imMetricsCollectorForLQMQualityEstimatorModel:(struct __CFString { }*)arg1 suggestedMaxLength:(unsigned long long)arg2 shouldUseQualityEstimatorModel:(bool)arg3 inputImageFeatures:(id)arg4;
- (bool)_isHEIFImageFormat:(struct __CFString { }*)arg1;
- (bool)_isWebPImageFormat:(struct __CFString { }*)arg1;
- (bool)_isWideGamutImage:(struct CGImageSource { }*)arg1;
- (id)_newGeneratedImage:(struct CGImageSource { }*)arg1 sourceWidth:(id)arg2 sourceHeight:(id)arg3 sourceLength:(unsigned long long)arg4 sourceProps:(id)arg5 target:(long long)arg6 hardwareEncoder:(id)arg7 inFormat:(struct __CFString { }*)arg8 fromFormat:(struct __CFString { }*)arg9 withMaxLength:(unsigned long long)arg10 withMaxCount:(unsigned long long)arg11 withCompressionQuality:(double)arg12 enforceMaxes:(bool)arg13 subsampling:(int)arg14 shouldSkipAuxillaryData:(bool)arg15;
- (void)_setWideGamutProperties:(id)arg1 scaledImage:(struct CGImage { }*)arg2;
- (id)_wideGamutImage:(struct CGImageSource { }*)arg1 sourceURL:(id)arg2 inFormat:(struct __CFString { }*)arg3 withMaxByteSize:(unsigned long long)arg4 maxDimension:(unsigned long long)arg5 actualSize:(unsigned long long*)arg6 telemetry:(id)arg7;
- (id)_writeHEIFImage:(struct CGImageSource { }*)arg1 sourceURL:(id)arg2 inFormat:(struct __CFString { }*)arg3 withMaxByteSize:(unsigned long long)arg4 maxDimension:(unsigned long long)arg5 actualSize:(unsigned long long*)arg6 startingLengthIndex:(int)arg7 usedLengthIndex:(int*)arg8 telemetry:(id)arg9;
- (id)_writeImage:(struct CGImageSource { }*)arg1 sourceURL:(id)arg2 target:(long long)arg3 hardwareEncoder:(id)arg4 inFormat:(struct __CFString { }*)arg5 fromFormat:(struct __CFString { }*)arg6 withMaxByteSize:(unsigned long long)arg7 maxDimension:(unsigned long long)arg8 actualSize:(unsigned long long*)arg9 startingLengthIndex:(int)arg10 usedLengthIndex:(int*)arg11 estimator:(id)arg12 isLQMEnabled:(bool)arg13 telemetry:(id)arg14;
- (id)_writeImageData:(id)arg1 inFormat:(struct __CFString { }*)arg2 sourceURL:(id)arg3;
- (id)_writeRepresentationsForImage:(struct CGImageSource { }*)arg1 target:(long long)arg2 sourceURL:(id)arg3 sizes:(id)arg4 maxDimension:(unsigned long long)arg5 srcUTI:(struct __CFString { }*)arg6 inFormat:(struct __CFString { }*)arg7 estimator:(id)arg8 isLQMEnabled:(bool)arg9 telemetry:(id)arg10;
- (void)copyAuxiliaryImagesFromImageSource:(struct CGImageSource { }*)arg1 toDestination:(struct CGImageDestination { }*)arg2 fromImageAtIndex:(unsigned long long)arg3 scaleFactor:(double)arg4;
- (id)copyFramePropertiesFrom:(struct CGImageSource { }*)arg1 index:(unsigned long long)arg2 inFormat:(struct __CFString { }*)arg3 outFormat:(struct __CFString { }*)arg4;
- (id)copyImagePropertiesFrom:(struct CGImageSource { }*)arg1 frameCount:(unsigned long long)arg2 withProps:(id)arg3 inFormat:(struct __CFString { }*)arg4 outFormat:(struct __CFString { }*)arg5;
- (double)overrideJPEGCompressionQuality;
- (void)setOverrideJPEGCompressionQuality:(double)arg1;
- (long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6 commonCapabilities:(id)arg7;
- (void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 isLQMEnabled:(bool)arg10 completionBlock:(id /* block */)arg11;

@end
