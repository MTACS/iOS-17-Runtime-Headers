
@interface ExplanationCollectionViewCell : UICollectionViewCell {
    UILabel * _bodyLabel;
    UILabel * _headerLabel;
}

@property (nonatomic, readonly) UILabel *bodyLabel;
@property (nonatomic, readonly) UILabel *headerLabel;

- (void).cxx_destruct;
- (id)bodyLabel;
- (id)headerLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
