
@interface CPSSecondaryManeuverView : UIView {
    CPTravelEstimates * _currentTravelEstimates;
    double  _generatedHeight;
    double  _generatedWidth;
    unsigned long long  _guidanceStyle;
    CPSAbridgableLabel * _instructionLabel;
    CPManeuver * _maneuver;
    long long  _style;
    UIImageView * _symbolView;
}

@property (nonatomic, retain) CPTravelEstimates *currentTravelEstimates;
@property (nonatomic) double generatedHeight;
@property (nonatomic) double generatedWidth;
@property (nonatomic) unsigned long long guidanceStyle;
@property (nonatomic, retain) CPSAbridgableLabel *instructionLabel;
@property (nonatomic, readonly) CPManeuver *maneuver;
@property (nonatomic) long long style;
@property (nonatomic, retain) UIImageView *symbolView;

- (void).cxx_destruct;
- (id)accessibilityName:(id)arg1;
- (id)currentTravelEstimates;
- (void)generateLayoutConfigurationsForSizeIfNecessary:(struct CGSize { double x1; double x2; })arg1 force:(bool)arg2;
- (double)generatedHeight;
- (double)generatedWidth;
- (unsigned long long)guidanceStyle;
- (double)horizontalInset;
- (id)initWithManeuver:(id)arg1;
- (id)instructionLabel;
- (id)maneuver;
- (void)setCurrentTravelEstimates:(id)arg1;
- (void)setGeneratedHeight:(double)arg1;
- (void)setGeneratedWidth:(double)arg1;
- (void)setGuidanceStyle:(unsigned long long)arg1;
- (void)setInstructionLabel:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSymbolView:(id)arg1;
- (long long)style;
- (id)symbolView;
- (void)traitCollectionDidChange:(id)arg1;

@end
