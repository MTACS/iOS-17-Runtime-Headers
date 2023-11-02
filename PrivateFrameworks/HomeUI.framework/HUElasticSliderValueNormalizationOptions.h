
@interface HUElasticSliderValueNormalizationOptions : NSObject {
    bool  _applyMinimumVisualRangeSpan;
    bool  _applyStepValue;
    unsigned long long  _boundingStrategy;
}

@property (nonatomic) bool applyMinimumVisualRangeSpan;
@property (nonatomic) bool applyStepValue;
@property (nonatomic) unsigned long long boundingStrategy;

- (bool)applyMinimumVisualRangeSpan;
- (bool)applyStepValue;
- (unsigned long long)boundingStrategy;
- (id)init;
- (void)setApplyMinimumVisualRangeSpan:(bool)arg1;
- (void)setApplyStepValue:(bool)arg1;
- (void)setBoundingStrategy:(unsigned long long)arg1;

@end
