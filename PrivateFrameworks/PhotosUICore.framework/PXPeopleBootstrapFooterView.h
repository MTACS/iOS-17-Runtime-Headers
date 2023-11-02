
@interface PXPeopleBootstrapFooterView : UICollectionReusableView {
    UILabel * _descriptionLabel;
    NSString * _descriptionText;
}

@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, copy) NSString *descriptionText;

+ (id)_descriptionLabelFont;
+ (struct CGSize { double x1; double x2; })sizeForBoundingSize:(struct CGSize { double x1; double x2; })arg1 descriptionText:(id)arg2;

- (void).cxx_destruct;
- (id)descriptionLabel;
- (id)descriptionText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDescriptionText:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
