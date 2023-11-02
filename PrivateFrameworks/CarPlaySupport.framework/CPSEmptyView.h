
@interface CPSEmptyView : UIView {
    CPSAbridgableLabel * _subtitleLabel;
    CPSAbridgableLabel * _titleLabel;
}

@property (nonatomic, retain) CPSAbridgableLabel *subtitleLabel;
@property (nonatomic, copy) NSArray *subtitleVariants;
@property (nonatomic, retain) CPSAbridgableLabel *titleLabel;
@property (nonatomic, copy) NSArray *titleVariants;

- (void).cxx_destruct;
- (void)_updateLabelTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleVariants:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleVariants:(id)arg1;
- (id)subtitleLabel;
- (id)subtitleVariants;
- (id)titleLabel;
- (id)titleVariants;
- (void)traitCollectionDidChange:(id)arg1;

@end
