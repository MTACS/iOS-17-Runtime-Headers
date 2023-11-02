
@interface MKTransitFilterCell : UICollectionViewCell {
    UILabel * _label;
}

@property (nonatomic, retain) NSString *titleText;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleText;

@end
