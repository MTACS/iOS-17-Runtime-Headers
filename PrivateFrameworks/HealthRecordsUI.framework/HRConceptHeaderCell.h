
@interface HRConceptHeaderCell : WDMedicalRecordGroupableCell {
    void $__lazy_storage_$_bottomConstraint;
    void categoryColor;
    void chevronView;
    void headerImage;
    void title;
    void titleLabel;
}

@property (nonatomic, retain) UIColor *categoryColor;
@property (nonatomic, retain) UIImage *headerImage;
@property (nonatomic) long long intendedPlacement;
@property (nonatomic, copy) NSString *title;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (id)categoryColor;
- (id)headerImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)intendedPlacement;
- (void)setCategoryColor:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setIntendedPlacement:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpConstraints;
- (void)setupSubviews;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
