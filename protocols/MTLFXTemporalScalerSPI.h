
@protocol MTLFXTemporalScalerSPI <MTLFXTemporalScaler>

@required

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })currentViewToClipMatrix;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })currentWorldToViewMatrix;
- (<MTLTexture> *)debugTexture;
- (void)encodeToCommandQueue:(id <MTLCommandQueue>)arg1;
- (struct CGPoint { double x1; double x2; })previousJitterOffset;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })previousViewToClipMatrix;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })previousWorldToViewMatrix;
- (void)setCurrentViewToClipMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setCurrentWorldToViewMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setDebugTexture:(id <MTLTexture>)arg1;
- (void)setPreviousJitterOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreviousViewToClipMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setPreviousWorldToViewMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
