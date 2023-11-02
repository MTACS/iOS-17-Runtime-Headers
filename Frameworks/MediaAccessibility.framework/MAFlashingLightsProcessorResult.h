
@interface MAFlashingLightsProcessorResult : NSObject {
    float  intensityLevel;
    float  mitigationLevel;
    bool  surfaceProcessed;
}

@property (nonatomic) float intensityLevel;
@property (nonatomic) float mitigationLevel;
@property (nonatomic) bool surfaceProcessed;

- (id)description;
- (float)intensityLevel;
- (float)mitigationLevel;
- (void)setIntensityLevel:(float)arg1;
- (void)setMitigationLevel:(float)arg1;
- (void)setSurfaceProcessed:(bool)arg1;
- (bool)surfaceProcessed;

@end
