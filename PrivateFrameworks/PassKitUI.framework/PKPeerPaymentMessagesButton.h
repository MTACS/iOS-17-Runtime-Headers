
@interface PKPeerPaymentMessagesButton : UIButton {
    UIColor * _backgroundColor;
    UIColor * _highlightedBackgroundColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _showsActivityIndicator;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) bool showsActivityIndicator;

+ (struct CGSize { double x1; double x2; })referenceSize;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usePlatterColor:(bool)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShowsActivityIndicator:(bool)arg1;
- (bool)showsActivityIndicator;

@end
