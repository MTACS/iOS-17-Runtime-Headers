
@interface PKBillPaymentCircularView : UIView {
    UIImage * _image;
    UIImageView * _imageView;
    UIColor * _primaryColor;
    UIView * _primaryView;
    UIColor * _secondaryColor;
    UIView * _secondaryView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _shadowFrame;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) UIColor *primaryColor;
@property (nonatomic, copy) UIColor *secondaryColor;

- (void).cxx_destruct;
- (id)_defaultSecondaryColor;
- (void)_updateColors;
- (id)image;
- (id)init;
- (void)layoutSubviews;
- (id)primaryColor;
- (id)secondaryColor;
- (void)setImage:(id)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setSecondaryColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
