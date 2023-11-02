
@interface CPSDashboardEstimatesView : UIView <CPSNavigationDisplaying> {
    UILabel * _distanceRemainingLabel;
    UILabel * _etaLabel;
    UIStackView * _stackView;
    UILabel * _timeRemainingLabel;
    CPSTravelEstimatesStringFormatter * _travelEstimatesStringFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *distanceRemainingLabel;
@property (nonatomic, retain) UILabel *etaLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *timeRemainingLabel;
@property (nonatomic, retain) CPSTravelEstimatesStringFormatter *travelEstimatesStringFormatter;

- (void).cxx_destruct;
- (id)_labelFont;
- (id)distanceRemainingLabel;
- (id)etaLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDistanceRemainingLabel:(id)arg1;
- (void)setEtaLabel:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTimeRemainingLabel:(id)arg1;
- (void)setTravelEstimatesStringFormatter:(id)arg1;
- (id)stackView;
- (id)timeRemainingLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)travelEstimatesStringFormatter;
- (void)updateTripEstimates:(id)arg1;

@end
