
@interface PXPeopleRecoCollectionViewCell : UICollectionViewCell {
    UIImageView * _checkView;
    UIImageView * _faceView;
}

@property (nonatomic, readonly) UIImageView *checkView;
@property (nonatomic, readonly) UIImageView *faceView;

- (void).cxx_destruct;
- (id)checkView;
- (id)faceView;
- (bool)hasImageSet;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setImage:(id)arg1 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setIsRejected:(bool)arg1;

@end
