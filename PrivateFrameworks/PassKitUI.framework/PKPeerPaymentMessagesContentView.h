
@interface PKPeerPaymentMessagesContentView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    PKPeerPaymentMessagesRoundedButton * _button;
    struct { 
        unsigned int horizontalAlignment; 
        unsigned int verticalAlignment; 
    }  _contentAlignment;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    bool  _ignoreTopSafeArea;
    UIImageView * _imageView;
    UILabel * _label;
    double  _verticalPadding;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) PKPeerPaymentMessagesRoundedButton *button;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; } contentAlignment;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) bool ignoreTopSafeArea;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) double verticalPadding;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)button;
- (struct { unsigned int x1; unsigned int x2; })contentAlignment;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (bool)ignoreTopSafeArea;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setActivityIndicator:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setContentAlignment:(struct { unsigned int x1; unsigned int x2; })arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIgnoreTopSafeArea:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setVerticalPadding:(double)arg1;
- (double)verticalPadding;

@end
