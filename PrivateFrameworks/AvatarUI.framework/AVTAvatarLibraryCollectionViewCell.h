
@interface AVTAvatarLibraryCollectionViewCell : UICollectionViewCell {
    UIImageView * _imageView;
}

@property (nonatomic, readonly) UIImageView *imageView;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateAvatarImage:(id)arg1;

@end
