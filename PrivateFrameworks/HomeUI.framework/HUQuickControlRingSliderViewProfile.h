
@interface HUQuickControlRingSliderViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile> {
    NSArray * _gradationMarkingValues;
    unsigned long long  _gradationMarkingViewStyle;
    unsigned long long  _handleViewStyle;
    bool  _hasOffState;
    bool  _hasSecondaryValue;
    bool  _isHandleViewVisible;
    HFNumberValueConstraints * _primaryValueConstraints;
    HFNumberValueConstraints * _secondaryValueConstraints;
    bool  _shouldShowSupplementaryValue;
    unsigned long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *gradationMarkingValues;
@property (nonatomic) unsigned long long gradationMarkingViewStyle;
@property (nonatomic) unsigned long long handleViewStyle;
@property (nonatomic) bool hasOffState;
@property (nonatomic) bool hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isHandleViewVisible;
@property (nonatomic, retain) HFNumberValueConstraints *primaryValueConstraints;
@property (nonatomic, retain) HFNumberValueConstraints *secondaryValueConstraints;
@property (nonatomic) bool shouldShowSupplementaryValue;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)gradationMarkingValues;
- (unsigned long long)gradationMarkingViewStyle;
- (unsigned long long)handleViewStyle;
- (bool)hasOffState;
- (bool)hasSecondaryValue;
- (id)init;
- (bool)isHandleViewVisible;
- (id)primaryValueConstraints;
- (id)secondaryValueConstraints;
- (void)setGradationMarkingValues:(id)arg1;
- (void)setGradationMarkingViewStyle:(unsigned long long)arg1;
- (void)setHandleViewStyle:(unsigned long long)arg1;
- (void)setHasOffState:(bool)arg1;
- (void)setHasSecondaryValue:(bool)arg1;
- (void)setIsHandleViewVisible:(bool)arg1;
- (void)setPrimaryValueConstraints:(id)arg1;
- (void)setSecondaryValueConstraints:(id)arg1;
- (void)setShouldShowSupplementaryValue:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (bool)shouldShowSupplementaryValue;
- (unsigned long long)style;

@end
