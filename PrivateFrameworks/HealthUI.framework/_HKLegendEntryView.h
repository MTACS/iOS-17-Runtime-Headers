
@interface _HKLegendEntryView : UIStackView {
    HKLegendEntry * _currentLegendEntry;
    _HKLegendDot * _legendDot;
    HKLegendEntry * _legendEntry;
    UIImageView * _legendIcon;
    UILabel * _legendLabel;
}

@property (nonatomic, retain) HKLegendEntry *legendEntry;

- (void).cxx_destruct;
- (id)initWithLegendEntry:(id)arg1;
- (id)legendEntry;
- (void)setLegendEntry:(id)arg1;

@end
