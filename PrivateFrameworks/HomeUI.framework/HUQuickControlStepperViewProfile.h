
@interface HUQuickControlStepperViewProfile : HUQuickControlViewProfile {
    unsigned long long  _numberOfSegments;
    NSArray * _segmentTitles;
    bool  _showSegmentTitles;
    unsigned long long  _stepperBehavior;
    unsigned long long  _stepperStyle;
}

@property (nonatomic) unsigned long long numberOfSegments;
@property (nonatomic, copy) NSArray *segmentTitles;
@property (nonatomic) bool showSegmentTitles;
@property (nonatomic) unsigned long long stepperBehavior;
@property (nonatomic) unsigned long long stepperStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)numberOfSegments;
- (id)segmentTitles;
- (void)setNumberOfSegments:(unsigned long long)arg1;
- (void)setSegmentTitles:(id)arg1;
- (void)setShowSegmentTitles:(bool)arg1;
- (void)setStepperBehavior:(unsigned long long)arg1;
- (void)setStepperStyle:(unsigned long long)arg1;
- (bool)showSegmentTitles;
- (unsigned long long)stepperBehavior;
- (unsigned long long)stepperStyle;
- (bool)supportsTouchContinuation;

@end
