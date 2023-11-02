
@interface WDMedicalRecordCategoryMinimizedSectionHeaderCell : WDMedicalRecordGroupableCell {
    HKGradientView * _backgroundGradientView;
    NSLayoutConstraint * _heightConstraint;
}

@property (nonatomic, retain) HKGradientView *backgroundGradientView;
@property (nonatomic, retain) HKGradient *gradient;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;

+ (double)_pillBackgroundViewHeightConstraint;
+ (id)_titleLabelFont;

- (void).cxx_destruct;
- (double)_cornerRadius;
- (void)_updateForCurrentSizeCategory;
- (id)backgroundGradientView;
- (id)gradient;
- (id)heightConstraint;
- (void)setBackgroundGradientView:(id)arg1;
- (void)setGradient:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setupSubviews;
- (void)traitCollectionDidChange:(id)arg1;

@end
