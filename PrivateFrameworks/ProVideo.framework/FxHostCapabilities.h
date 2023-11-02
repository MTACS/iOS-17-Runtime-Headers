
@interface FxHostCapabilities : NSObject {
    struct FxHostCapabilitiesPriv { id x1; unsigned int x2; id x3; id x4; } * _hostCapPriv;
}

+ (id)getRemoteHostCapabilities;
+ (void)setRemoteHostCapabilities:(id)arg1;

- (void)dealloc;
- (bool)formatsFloatRGBABitmapsAsARGB;
- (id)glContextPixelFormatAttributes;
- (id)hostID;
- (bool)hostIsFCE;
- (bool)hostIsFCP;
- (bool)hostIsMotion;
- (unsigned int)hostVersionNumber;
- (id)initWithAPIManager:(id)arg1;
- (bool)notifiesParameterChangedForGenerators;
- (bool)parameterChangedUsableForAllParameters;
- (bool)supportsDisabledParameters;
- (bool)supportsGroupParameters;
- (bool)supportsHiddenParameters;
- (bool)supportsTemporalBitmaps;
- (unsigned long long)timeBase;
- (bool)upscalesFields;

@end
