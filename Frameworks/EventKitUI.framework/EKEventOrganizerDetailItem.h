
@interface EKEventOrganizerDetailItem : EKEventDetailItem {
    UITableViewCell * _cell;
    bool  _hideDisclosureIndicator;
    <EKIdentityProtocol> * _organizerOverride;
}

@property (nonatomic) bool hideDisclosureIndicator;
@property (retain) <EKIdentityProtocol> *organizerOverride;

- (void).cxx_destruct;
- (void)_updateDisclosureIndicator;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(bool)arg3;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)hideDisclosureIndicator;
- (id)organizerOverride;
- (void)reset;
- (void)setHideDisclosureIndicator:(bool)arg1;
- (void)setOrganizerOverride:(id)arg1;

@end
