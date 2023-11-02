
@interface WDMedicalRecordStandaloneImageCell : WDMedicalRecordGroupableCell {
    UILabel * _detailLabel;
    UIImageView * _disclosureChevronView;
    UIImageView * _titleImageView;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *detail;
@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, retain) UIImageView *disclosureChevronView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) UIImage *titleImage;
@property (nonatomic, retain) UIImageView *titleImageView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (id)detail;
- (id)detailLabel;
- (id)disclosureChevronView;
- (void)setDetail:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setDisclosureChevronView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleImage:(id)arg1;
- (void)setTitleImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupSubviews;
- (id)title;
- (id)titleImage;
- (id)titleImageView;
- (id)titleLabel;

@end
