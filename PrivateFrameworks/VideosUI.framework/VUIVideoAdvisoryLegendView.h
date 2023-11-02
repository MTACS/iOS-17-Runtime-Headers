
@interface VUIVideoAdvisoryLegendView : UIView {
    VUIVideoAdvisoryViewLayout * _layout;
    VUILabel * _legendDescriptionLabel;
    VUILabel * _legendNameLabel;
}

@property (nonatomic, retain) VUIVideoAdvisoryViewLayout *layout;
@property (nonatomic, copy) NSString *legendDescription;
@property (nonatomic, retain) VUILabel *legendDescriptionLabel;
@property (nonatomic, copy) NSString *legendName;
@property (nonatomic, retain) VUILabel *legendNameLabel;

- (void).cxx_destruct;
- (id)initWithLayout:(id)arg1;
- (id)layout;
- (void)layoutSubviews;
- (id)legendDescription;
- (id)legendDescriptionLabel;
- (struct CGSize { double x1; double x2; })legendDescriptionSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)legendName;
- (id)legendNameLabel;
- (struct CGSize { double x1; double x2; })legendNameSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayout:(id)arg1;
- (void)setLegendDescription:(id)arg1;
- (void)setLegendDescriptionLabel:(id)arg1;
- (void)setLegendName:(id)arg1;
- (void)setLegendNameLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
