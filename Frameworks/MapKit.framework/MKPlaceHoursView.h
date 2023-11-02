
@interface MKPlaceHoursView : UIView {
    NSArray * _baselineToBaselineConstraints;
    NSArray * _baselineToBottomConstraints;
    NSLayoutConstraint * _baselineToTop;
    _MKUILabel * _bottomMessageLabel;
    GEOBusinessHours * _businessHours;
    _MKUILabel * _collapsableOpenStateLabel;
    NSDictionary * _formattedHoursData;
    _MKLocalizedHoursBuilder * _hoursBuilder;
    <MKPlaceHoursViewDelegate> * _hoursDelegate;
    NSArray * _labels;
    NSArray * _placeDailyHours;
    unsigned long long  _placeHoursViewOptions;
    NSArray * _topAndBottomLabelConstraints;
    _MKUILabel * _topDayOrHourLabel;
    _MKUILabel * _topLabel;
    _MKUILabel * _topMessageLabel;
}

@property (nonatomic, retain) GEOBusinessHours *businessHours;
@property (nonatomic, retain) NSDictionary *formattedHoursData;
@property (nonatomic, retain) _MKLocalizedHoursBuilder *hoursBuilder;
@property (nonatomic) <MKPlaceHoursViewDelegate> *hoursDelegate;
@property (nonatomic) unsigned long long placeHoursViewOptions;
@property (nonatomic, readonly) _MKUILabel *topLabel;

- (void).cxx_destruct;
- (void)_collapseAllLabelsFromOptions;
- (void)_commonInit;
- (void)_contentSizeDidChange;
- (bool)_shouldCollapseTopMessageLabel;
- (id)_standardLabel;
- (void)_updateHoursView;
- (void)_updateOptionsForCollapsingToSingleLineAndColor;
- (void)applyRulesForTopAndBottomLabel;
- (id)businessHours;
- (id)formattedHoursData;
- (id)hoursBuilder;
- (id)hoursDelegate;
- (id)hoursGrayColor;
- (void)infoCardThemeChanged;
- (id)initWithBusinessHours:(id)arg1;
- (unsigned long long)placeHoursViewOptions;
- (void)setBusinessHours:(id)arg1;
- (void)setFormattedHoursData:(id)arg1;
- (void)setHoursBuilder:(id)arg1;
- (void)setHoursDelegate:(id)arg1;
- (void)setPlaceHoursViewOptions:(unsigned long long)arg1;
- (void)setTopLabel:(id)arg1;
- (id)topLabel;
- (bool)wantsDefaultClipping;

@end
