
@interface _UITextSelectionSettings : _UISettings {
    NSNumber * _allowExtendingSelections;
    double  _allowableForceMovement;
    double  _allowableSeparation;
    NSNumber * _enableDeepPress;
    double  _gain;
    double  _linear;
    double  _maxPinkWidth;
    double  _minPinkWidth;
    double  _parabolic;
    double  _pinkWidthFactor;
    NSNumber * _shouldPreferEndOfWord;
    NSNumber * _shouldUseAcceleration;
}

@property (nonatomic, retain) NSNumber *allowExtendingSelections;
@property (nonatomic) double allowableForceMovement;
@property (nonatomic) double allowableSeparation;
@property (nonatomic, retain) NSNumber *enableDeepPress;
@property (nonatomic) double gain;
@property (nonatomic) double linear;
@property (nonatomic) double maxPinkWidth;
@property (nonatomic) double minPinkWidth;
@property (nonatomic) double parabolic;
@property (nonatomic) double pinkWidthFactor;
@property (nonatomic, retain) NSNumber *shouldPreferEndOfWord;
@property (nonatomic, retain) NSNumber *shouldUseAcceleration;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allowExtendingSelections;
- (double)allowableForceMovement;
- (double)allowableSeparation;
- (id)enableDeepPress;
- (double)gain;
- (double)linear;
- (double)maxPinkWidth;
- (double)minPinkWidth;
- (double)parabolic;
- (double)pinkWidthFactor;
- (void)setAllowExtendingSelections:(id)arg1;
- (void)setAllowableForceMovement:(double)arg1;
- (void)setAllowableSeparation:(double)arg1;
- (void)setDefaultValues;
- (void)setEnableDeepPress:(id)arg1;
- (void)setGain:(double)arg1;
- (void)setLinear:(double)arg1;
- (void)setMaxPinkWidth:(double)arg1;
- (void)setMinPinkWidth:(double)arg1;
- (void)setParabolic:(double)arg1;
- (void)setPinkWidthFactor:(double)arg1;
- (void)setShouldPreferEndOfWord:(id)arg1;
- (void)setShouldUseAcceleration:(id)arg1;
- (id)shouldPreferEndOfWord;
- (id)shouldUseAcceleration;

@end
