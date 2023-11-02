
@interface PTTimedRenderingMetadataVersion1 : PTTimedRenderingMetadata {
    unsigned int  _agc;
    float  _alphaLowLight;
    float  _aperture;
    float  _focusDistance;
    unsigned int  _frameId;
    bool  _readSuccessAll;
}

@property (nonatomic) unsigned int agc;
@property (nonatomic) float alphaLowLight;
@property (nonatomic) float aperture;
@property (nonatomic) float focusDistance;
@property (nonatomic) unsigned int frameId;

- (unsigned int)agc;
- (float)alphaLowLight;
- (float)aperture;
- (void)applyToRenderRequest:(id)arg1;
- (float)focusDistance;
- (unsigned int)frameId;
- (id)initWithData:(id)arg1 minorVersion:(unsigned int)arg2;
- (id)initWithMinorVersion:(unsigned int)arg1;
- (void)setAgc:(unsigned int)arg1;
- (void)setAlphaLowLight:(float)arg1;
- (void)setAperture:(float)arg1;
- (void)setFocusDistance:(float)arg1;
- (void)setFrameId:(unsigned int)arg1;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (bool)writeToData:(id)arg1 withOptions:(id)arg2;

@end
