
@interface CKAppMenuCollectionViewCell : UICollectionViewCell {
    <CKAppMenuCollectionViewCellDelegate> * _delegate;
    UIImageView * _imageView;
    UIView * _selectionView;
    UILabel * _titleLabel;
}

@property (nonatomic) <CKAppMenuCollectionViewCellDelegate> *delegate;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIView *selectionView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)delegate;
- (void)didHoverOverCell:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)selectionView;
- (void)setDelegate:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
