
@interface CoreAudioKit.AUGenericViewMeterParameterCell : CoreAudioKit.AUGenericViewParameterCellBase {
    void maxLabel;
    void meter;
    void minLabel;
    void minWidthConstraint;
    void unitLabel;
}

@property (nonatomic) UILabel *maxLabel;
@property (nonatomic) _TtC12CoreAudioKit11AUMeterView *meter;
@property (nonatomic) UILabel *minLabel;
@property (nonatomic) NSLayoutConstraint *minWidthConstraint;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) UILabel *unitLabel;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)maxLabel;
- (id)meter;
- (id)minLabel;
- (id)minWidthConstraint;
- (void)setMaxLabel:(id)arg1;
- (void)setMeter:(id)arg1;
- (void)setMinLabel:(id)arg1;
- (void)setMinWidthConstraint:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUnitLabel:(id)arg1;
- (id)tintColor;
- (id)unitLabel;

@end
