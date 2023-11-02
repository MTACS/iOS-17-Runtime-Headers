
@interface WDMedicalRecordCategorySectionHeaderCell : WDMedicalRecordGroupableCell {
    HKRoundedHeaderView * _headerView;
}

@property (nonatomic, retain) HKGradient *gradient;
@property (nonatomic, retain) HKRoundedHeaderView *headerView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)gradient;
- (id)headerView;
- (id)image;
- (void)setGradient:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setupSubviews;
- (id)title;

@end
