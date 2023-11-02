
@interface STSResultDetailFooter : UIView {
    NSMutableArray * _constraints;
    UIButton * _providerButton;
    struct CGSize { 
        double width; 
        double height; 
    }  _providerIconSize;
    UIImageView * _providerIconView;
    UIButton * _sendButton;
}

@property (nonatomic, readonly) UIButton *providerButton;
@property (nonatomic, retain) UIImage *providerIcon;
@property (nonatomic) struct CGSize { double x1; double x2; } providerIconSize;
@property (nonatomic, readonly) UIButton *sendButton;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)providerButton;
- (id)providerIcon;
- (struct CGSize { double x1; double x2; })providerIconSize;
- (id)sendButton;
- (void)setProviderIcon:(id)arg1;
- (void)setProviderIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;

@end
