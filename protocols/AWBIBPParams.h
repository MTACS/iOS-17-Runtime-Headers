
@protocol AWBIBPParams <NSObject>

@required

- (struct { unsigned int x1; unsigned int x2; unsigned int x3; })awbComboGains;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; })awbComboGainsNormalized;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; })awbGains;
- (NSDictionary *)cameraInfo;
- (NSNumber *)cfaLayout;
- (<MTLTexture> *)clippedTex;
- (NSNumber *)digitalFlash;
- (NSNumber *)firstPixel;
- (<MTLTexture> *)imageTex;
- (<MTLTexture> *)lscGainsTex;
- (NSNumber *)lscMaxGain;
- (NSDictionary *)metadata;
- (NSDictionary *)moduleConfig;
- (NSMutableDictionary *)outputMetadata;
- (NSDictionary *)registers;
- (void)reset;
- (void)setAwbComboGains:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (void)setAwbComboGainsNormalized:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (void)setAwbGains:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (void)setCameraInfo:(NSDictionary *)arg1;
- (void)setCfaLayout:(NSNumber *)arg1;
- (void)setClippedTex:(id <MTLTexture>)arg1;
- (void)setDigitalFlash:(NSNumber *)arg1;
- (NSDictionary *)setFileDict;
- (void)setFirstPixel:(NSNumber *)arg1;
- (void)setImageTex:(id <MTLTexture>)arg1;
- (void)setLscGainsTex:(id <MTLTexture>)arg1;
- (void)setLscMaxGain:(NSNumber *)arg1;
- (void)setMetadata:(NSDictionary *)arg1;
- (void)setModuleConfig:(NSDictionary *)arg1;
- (void)setOutputMetadata:(NSMutableDictionary *)arg1;
- (void)setRegisters:(NSDictionary *)arg1;
- (void)setSetFileDict:(NSDictionary *)arg1;
- (void)setSkinMask:(id <MTLTexture>)arg1;
- (void)setSkipDemosaic:(NSNumber *)arg1;
- (void)setValidBufferRect:(NSDictionary *)arg1;
- (<MTLTexture> *)skinMask;
- (NSNumber *)skipDemosaic;
- (NSDictionary *)validBufferRect;

@end
