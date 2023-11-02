
@interface WDMedicalRecordReferenceRangeViewCell : WDMedicalRecordGroupableCell <WDAttributedSubtitleDisplayable> {
    HRExpandedRangeValueView * _expandedRangeValueView;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    HKInspectableValueInRange * _valueInRange;
}

@property (nonatomic, retain) HRExpandedRangeValueView *expandedRangeValueView;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) HKInspectableValueInRange *valueInRange;

- (void).cxx_destruct;
- (id)expandedRangeValueView;
- (void)setAttributedSubtitleText:(id)arg1;
- (void)setExpandedRangeValueView:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setValueInRange:(id)arg1;
- (void)setupSubviews;
- (id)subtitle;
- (id)subtitleLabel;
- (id)valueInRange;

@end
