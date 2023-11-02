
@interface MRUActivityMirroringView : UIView {
    UIButton * _button;
    UIImage * _deviceImage;
    UIImageView * _deviceImageView;
    NSString * _deviceName;
    BSUIEmojiLabelView * _deviceNameView;
    UILabel * _headerLabel;
    MRUActivityAccessoryView * _leadingView;
    CCUICAPackageView * _packageView;
    NSString * _state;
    MRUActivityAccessoryView * _trailingView;
}

@property (nonatomic, readonly) UIButton *button;
@property (nonatomic, retain) UIImage *deviceImage;
@property (nonatomic, retain) UIImageView *deviceImageView;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) BSUIEmojiLabelView *deviceNameView;
@property (nonatomic, retain) UILabel *headerLabel;
@property (nonatomic, readonly) MRUActivityAccessoryView *leadingView;
@property (nonatomic, retain) CCUICAPackageView *packageView;
@property (nonatomic, retain) NSString *state;
@property (nonatomic, readonly) MRUActivityAccessoryView *trailingView;

- (void).cxx_destruct;
- (id)button;
- (id)deviceImage;
- (id)deviceImageView;
- (id)deviceName;
- (id)deviceNameView;
- (id)headerLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leadingView;
- (id)packageView;
- (double)preferredHeightForBottomSafeArea;
- (void)setDeviceImage:(id)arg1;
- (void)setDeviceImageView:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceNameView:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setPackageView:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (id)trailingView;
- (void)updateContentSizeCategory;
- (void)updateDeviceSymbolConfiguration;
- (void)updatePackageScale;
- (void)updateVisibilty;

@end
