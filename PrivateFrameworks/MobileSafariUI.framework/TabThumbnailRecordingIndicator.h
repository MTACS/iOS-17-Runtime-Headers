
@interface TabThumbnailRecordingIndicator : UIView {
    UIImageView * _imageView;
    unsigned long long  _mediaStateIcon;
}

@property (nonatomic) unsigned long long mediaStateIcon;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)mediaStateIcon;
- (void)setMediaStateIcon:(unsigned long long)arg1;

@end
