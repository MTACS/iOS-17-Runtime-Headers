
@interface DMCEnrollmentNameItemCell : UICollectionViewCell {
    UILabel * _textLabel;
}

@property (nonatomic, retain) UILabel *textLabel;

+ (id)_titleFont;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;

@end
