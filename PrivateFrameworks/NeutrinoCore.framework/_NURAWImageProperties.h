
@interface _NURAWImageProperties : NSObject <NURAWImageProperties> {
    NSArray * _availableDecoderVersions;
    NSString * _decoderVersion;
    bool  _hasLensCorrection;
    bool  _isAppleProRaw;
    bool  _isDeepFusion;
    bool  _isSensorRawCapture;
    bool  _isUnifiedBracketingHDRCapture;
    <NURAWNoiseReductionProperties> * _noiseReductionProperties;
    _NURAWCameraSpaceProperties * _rawCameraSpaceProperties;
    CIFilter * _rawConvert;
    _NURAWToneCurveProperties * _rawToneCurveProperties;
    double  _temperature;
    double  _tint;
}

@property (retain) NSArray *availableDecoderVersions;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *decoderVersion;
@property (readonly, copy) NSString *description;
@property bool hasLensCorrection;
@property (readonly) unsigned long long hash;
@property bool isAppleProRaw;
@property bool isDeepFusion;
@property bool isSensorRawCapture;
@property bool isUnifiedBracketingHDRCapture;
@property (retain) <NURAWNoiseReductionProperties> *noiseReductionProperties;
@property (retain) _NURAWCameraSpaceProperties *rawCameraSpaceProperties;
@property (retain) CIFilter *rawConvert;
@property (retain) _NURAWToneCurveProperties *rawToneCurveProperties;
@property (readonly) Class superclass;
@property double temperature;
@property double tint;

- (void).cxx_destruct;
- (id)availableDecoderVersions;
- (id)decoderVersion;
- (id)description;
- (bool)hasLensCorrection;
- (id)inputNeutralXYFromRGB:(const double*)arg1;
- (bool)isAppleProRaw;
- (bool)isDeepFusion;
- (bool)isSensorRawCapture;
- (bool)isUnifiedBracketingHDRCapture;
- (id)noiseReductionProperties;
- (id)rawCameraSpaceProperties;
- (id)rawConvert;
- (id)rawToneCurveProperties;
- (void)setAvailableDecoderVersions:(id)arg1;
- (void)setDecoderVersion:(id)arg1;
- (void)setHasLensCorrection:(bool)arg1;
- (void)setIsAppleProRaw:(bool)arg1;
- (void)setIsDeepFusion:(bool)arg1;
- (void)setIsSensorRawCapture:(bool)arg1;
- (void)setIsUnifiedBracketingHDRCapture:(bool)arg1;
- (void)setNoiseReductionProperties:(id)arg1;
- (void)setRawCameraSpaceProperties:(id)arg1;
- (void)setRawConvert:(id)arg1;
- (void)setRawToneCurveProperties:(id)arg1;
- (void)setTemperature:(double)arg1;
- (void)setTint:(double)arg1;
- (double)temperature;
- (double)tint;

@end
