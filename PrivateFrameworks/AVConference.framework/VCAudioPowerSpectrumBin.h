
@interface VCAudioPowerSpectrumBin : NSObject {
    struct _VCRange { 
        float min; 
        float max; 
    }  _frequencyRange;
    float  _powerLevel;
}

@property (nonatomic) struct _VCRange { float x1; float x2; } frequencyRange;
@property (nonatomic) float powerLevel;

- (id)description;
- (struct _VCRange { float x1; float x2; })frequencyRange;
- (id)initWithFrequencyRange:(struct _VCRange { float x1; float x2; })arg1;
- (float)powerLevel;
- (void)setFrequencyRange:(struct _VCRange { float x1; float x2; })arg1;
- (void)setPowerLevel:(float)arg1;

@end
