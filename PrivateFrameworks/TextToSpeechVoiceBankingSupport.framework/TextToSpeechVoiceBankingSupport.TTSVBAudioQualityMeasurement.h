
@interface TextToSpeechVoiceBankingSupport.TTSVBAudioQualityMeasurement : NSObject {
    void snr;
    void snrEnd;
    void snrEndUnnormalized;
    void snrThreshold;
    void snrUnnormalized;
    void spl;
    void splEnd;
    void splEndUnnormalized;
    void splThreshold;
    void splUnnormalized;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) float snr;
@property (nonatomic) float snrEnd;
@property (nonatomic) float snrEndUnnormalized;
@property (nonatomic) float snrThreshold;
@property (nonatomic) float snrUnnormalized;
@property (nonatomic) float spl;
@property (nonatomic) float splEnd;
@property (nonatomic) float splEndUnnormalized;
@property (nonatomic) float splThreshold;
@property (nonatomic) float splUnnormalized;

- (id)description;
- (id)init;
- (void)setSnr:(float)arg1;
- (void)setSnrEnd:(float)arg1;
- (void)setSnrEndUnnormalized:(float)arg1;
- (void)setSnrThreshold:(float)arg1;
- (void)setSnrUnnormalized:(float)arg1;
- (void)setSpl:(float)arg1;
- (void)setSplEnd:(float)arg1;
- (void)setSplEndUnnormalized:(float)arg1;
- (void)setSplThreshold:(float)arg1;
- (void)setSplUnnormalized:(float)arg1;
- (float)snr;
- (float)snrEnd;
- (float)snrEndUnnormalized;
- (float)snrThreshold;
- (float)snrUnnormalized;
- (float)spl;
- (float)splEnd;
- (float)splEndUnnormalized;
- (float)splThreshold;
- (float)splUnnormalized;

@end
