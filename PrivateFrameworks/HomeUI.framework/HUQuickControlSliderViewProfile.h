
@interface HUQuickControlSliderViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile> {
    bool  _hasOffState;
    bool  _hasSecondaryValue;
    unsigned long long  _interactionFidelity;
    unsigned long long  _preferredFillSection;
    HFNumberValueConstraints * _primaryValueConstraints;
    HFNumberValueConstraints * _secondaryValueConstraints;
    bool  _showGrabbers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasOffState;
@property (nonatomic) bool hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long interactionFidelity;
@property (nonatomic) unsigned long long preferredFillSection;
@property (nonatomic, retain) HFNumberValueConstraints *primaryValueConstraints;
@property (nonatomic, retain) HFNumberValueConstraints *secondaryValueConstraints;
@property (nonatomic) bool showGrabbers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)gestureDragCoefficient;
- (bool)hasOffState;
- (bool)hasSecondaryValue;
- (id)init;
- (unsigned long long)interactionFidelity;
- (unsigned long long)preferredFillSection;
- (id)primaryValueConstraints;
- (id)secondaryValueConstraints;
- (void)setHasOffState:(bool)arg1;
- (void)setHasSecondaryValue:(bool)arg1;
- (void)setInteractionFidelity:(unsigned long long)arg1;
- (void)setPreferredFillSection:(unsigned long long)arg1;
- (void)setPrimaryValueConstraints:(id)arg1;
- (void)setSecondaryValueConstraints:(id)arg1;
- (void)setShowGrabbers:(bool)arg1;
- (bool)showGrabbers;
- (bool)supportsTouchContinuation;

@end
