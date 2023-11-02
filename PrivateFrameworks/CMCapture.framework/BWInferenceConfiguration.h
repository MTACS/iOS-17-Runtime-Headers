
@interface BWInferenceConfiguration : NSObject {
    int  _inferenceType;
    float  _maximumFramesPerSecond;
    unsigned int  _priority;
    bool  _propagatesFrameRatePrevention;
    NSDictionary * _tuningParameters;
}

@property (nonatomic, readonly) int inferenceType;
@property (nonatomic) float maximumFramesPerSecond;
@property (nonatomic) unsigned int priority;
@property (nonatomic) bool propagatesFrameRatePrevention;
@property (nonatomic, copy) NSDictionary *tuningParameters;

- (void)dealloc;
- (int)inferenceType;
- (id)initWithInferenceType:(int)arg1;
- (float)maximumFramesPerSecond;
- (unsigned int)priority;
- (bool)propagatesFrameRatePrevention;
- (void)setMaximumFramesPerSecond:(float)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setPropagatesFrameRatePrevention:(bool)arg1;
- (void)setTuningParameters:(id)arg1;
- (id)tuningParameters;

@end
