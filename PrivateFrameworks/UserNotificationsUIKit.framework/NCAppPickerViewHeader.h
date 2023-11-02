
@interface NCAppPickerViewHeader : UICollectionReusableView {
    UILabel * _descriptionLabel;
    UILabel * _orderingDescriptionLabel;
    UIView * _orderingWarningContainer;
    UIImageView * _orderingWarningIconImageView;
    UILabel * _orderingWarningLabel;
    UILabel * _titleLabel;
}

+ (id)_descriptionFont;
+ (id)_descriptionText;
+ (id)_orderingDescriptionFont;
+ (id)_orderingDescriptionText;
+ (id)_orderingWarningFont;
+ (id)_orderingWarningText;
+ (id)_titleFont;
+ (id)_titleText;
+ (double)preferredHeightForWidth:(double)arg1 supportsSortByAvgNumberOfNotifications:(bool)arg2;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)configureSupportsSortByAvgNumberOfNotifications:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
