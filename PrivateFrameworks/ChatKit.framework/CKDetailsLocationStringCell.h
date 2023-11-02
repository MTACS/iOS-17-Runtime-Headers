
@interface CKDetailsLocationStringCell : UIView {
    UIVisualEffectView * _blurView;
    UIImageView * _locationImageView;
    UILabel * _locationLabel;
    NSString * _locationString;
}

@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (nonatomic, retain) UIImageView *locationImageView;
@property (nonatomic, retain) UILabel *locationLabel;
@property (nonatomic, retain) NSString *locationString;

- (void).cxx_destruct;
- (id)blurView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)locationImageView;
- (id)locationLabel;
- (id)locationString;
- (void)setBlurView:(id)arg1;
- (void)setLocationImageView:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setLocationString:(id)arg1;

@end
