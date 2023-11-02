
@interface MKPlaceHoursDayRow : MKPlaceSectionRowView <MKPlaceHoursViewDelegate> {
    MKPlaceHoursView * _hoursView;
    NSLayoutConstraint * _topAnchorToTopLabelBaseline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKPlaceHoursView *hoursView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *topAnchorToTopLabelBaseline;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpViewsForPlaceHoursDayRow;
- (id)hoursView;
- (void)hoursViewDidUpdate:(id)arg1;
- (id)initWithBusinessHours:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setHoursView:(id)arg1;
- (void)setTopAnchorToTopLabelBaseline:(id)arg1;
- (id)topAnchorToTopLabelBaseline;

@end
