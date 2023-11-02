
@interface ICQDeviceIdentificationView : UIView {
    double  _bottomMargin;
    UIImageView * _deviceImageView;
    UILabel * _deviceModelLabel;
    UILabel * _deviceNameLabel;
    double  _imageTextPadding;
    double  _leftExtraMargin;
    double  _topMargin;
}

@property (nonatomic) double bottomMargin;
@property (nonatomic, retain) UIImage *deviceImage;
@property (nonatomic) double imageTextPadding;
@property (nonatomic) double leftExtraMargin;
@property (nonatomic) double topMargin;

+ (void)initialize;

- (void).cxx_destruct;
- (double)bottomMargin;
- (id)deviceImage;
- (double)imageTextPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 deviceName:(id)arg2 deviceIdentifier:(id)arg3 imageURL:(id)arg4 isCurrentDevice:(bool)arg5;
- (void)layoutSubviews;
- (double)leftExtraMargin;
- (void)loadImageForDeviceIdentifier:(id)arg1 URL:(id)arg2;
- (void)setBottomMargin:(double)arg1;
- (void)setDeviceImage:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageTextPadding:(double)arg1;
- (void)setLeftExtraMargin:(double)arg1;
- (void)setTopMargin:(double)arg1;
- (void)sizeToFit;
- (double)topMargin;

@end
