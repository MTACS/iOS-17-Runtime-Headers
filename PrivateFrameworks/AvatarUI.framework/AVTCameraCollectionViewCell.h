
@interface AVTCameraCollectionViewCell : AVTStickerCollectionViewCell {
    UIView * _cameraCellView;
}

@property (nonatomic, retain) UIView *cameraCellView;

- (void).cxx_destruct;
- (id)cameraCellView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCameraCellView:(id)arg1;
- (void)updateCameraViewFrame;

@end
