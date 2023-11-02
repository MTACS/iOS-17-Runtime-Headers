
@interface AWBIBPParams : NSObject <AWBIBPParams> {
    struct { 
        unsigned int rGain; 
        unsigned int gGain; 
        unsigned int bGain; 
    }  _awbComboGains;
    struct { 
        unsigned int rGain; 
        unsigned int gGain; 
        unsigned int bGain; 
    }  _awbComboGainsNormalized;
    struct { 
        unsigned int rGain; 
        unsigned int gGain; 
        unsigned int bGain; 
    }  _awbGains;
    NSDictionary * _cameraInfo;
    NSNumber * _cfaLayout;
    <MTLTexture> * _clippedTex;
    NSNumber * _digitalFlash;
    NSNumber * _firstPixel;
    <MTLTexture> * _imageTex;
    <MTLTexture> * _lscGainsTex;
    NSNumber * _lscMaxGain;
    NSDictionary * _metadata;
    NSDictionary * _moduleConfig;
    NSMutableDictionary * _outputMetadata;
    NSDictionary * _registers;
    NSDictionary * _setFileDict;
    <MTLTexture> * _skinMask;
    NSNumber * _skipDemosaic;
    NSDictionary * _validBufferRect;
}

@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned int x3; } awbComboGains;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned int x3; } awbComboGainsNormalized;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned int x3; } awbGains;
@property (nonatomic, retain) NSDictionary *cameraInfo;
@property (nonatomic, retain) NSNumber *cfaLayout;
@property (nonatomic, retain) <MTLTexture> *clippedTex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *digitalFlash;
@property (nonatomic, retain) NSNumber *firstPixel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTLTexture> *imageTex;
@property (nonatomic, retain) <MTLTexture> *lscGainsTex;
@property (nonatomic, retain) NSNumber *lscMaxGain;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) NSDictionary *moduleConfig;
@property (nonatomic, retain) NSMutableDictionary *outputMetadata;
@property (nonatomic, retain) NSDictionary *registers;
@property (nonatomic, retain) NSDictionary *setFileDict;
@property (nonatomic, retain) <MTLTexture> *skinMask;
@property (nonatomic, retain) NSNumber *skipDemosaic;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *validBufferRect;

- (void).cxx_destruct;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; })awbComboGains;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; })awbComboGainsNormalized;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; })awbGains;
- (id)cameraInfo;
- (id)cfaLayout;
- (id)clippedTex;
- (id)digitalFlash;
- (id)firstPixel;
- (id)imageTex;
- (id)lscGainsTex;
- (id)lscMaxGain;
- (id)metadata;
- (id)moduleConfig;
- (id)outputMetadata;
- (id)registers;
- (void)reset;
- (void)setAwbComboGains:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (void)setAwbComboGainsNormalized:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (void)setAwbGains:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (void)setCameraInfo:(id)arg1;
- (void)setCfaLayout:(id)arg1;
- (void)setClippedTex:(id)arg1;
- (void)setDigitalFlash:(id)arg1;
- (id)setFileDict;
- (void)setFirstPixel:(id)arg1;
- (void)setImageTex:(id)arg1;
- (void)setLscGainsTex:(id)arg1;
- (void)setLscMaxGain:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setModuleConfig:(id)arg1;
- (void)setOutputMetadata:(id)arg1;
- (void)setRegisters:(id)arg1;
- (void)setSetFileDict:(id)arg1;
- (void)setSkinMask:(id)arg1;
- (void)setSkipDemosaic:(id)arg1;
- (void)setValidBufferRect:(id)arg1;
- (id)skinMask;
- (id)skipDemosaic;
- (id)validBufferRect;

@end
