
@interface PRAddWidgetDetailSheetWidgetDescriptionView : UIView {
    UILabel * _descriptionLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_createConstraints;
- (id)_descriptionLabelFont;
- (id)_titleLabelFont;
- (void)dealloc;
- (id)descriptionLabel;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)setDescriptionLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
