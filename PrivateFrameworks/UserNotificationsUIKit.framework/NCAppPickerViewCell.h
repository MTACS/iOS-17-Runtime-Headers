
@interface NCAppPickerViewCell : UICollectionViewCell {
    unsigned long long  _avgNumberOfNotificationsCount;
    UIView * _backgroundView;
    NCCheckmarkButton * _checkmarkButton;
    NSLayoutConstraint * _frequencyDotLeadingConstraint;
    UIView * _frequencyDotView;
    UILabel * _frequencyLabel;
    UIView * _frequencyLineView;
    NSLayoutConstraint * _frequencyLineWidthConstraint;
    UIImageView * _iconImageView;
    unsigned long long  _maxAvgNumberOfNotificationsCount;
    UIView * _titleAndFrequencyContainer;
    UILabel * _titleLabel;
}

+ (id)_frequencyFont;
+ (id)_titleFont;
+ (double)preferredHeightForText:(id)arg1 cellWidth:(double)arg2;
+ (double)preferredImageDimension;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)_frequencyTextForCount:(unsigned long long)arg1;
- (void)_layoutLine;
- (void)configureWithName:(id)arg1 image:(id)arg2 avgNumberOfNotificationsCount:(unsigned long long)arg3 maxAvgNumberOfNotificationsCount:(unsigned long long)arg4 selected:(bool)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end
