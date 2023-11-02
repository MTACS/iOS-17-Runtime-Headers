
@interface PKMessageExtensionMessageBubbleView : UIView {
    UIView * _buttonBackgroundView;
    UIImageView * _buttonIconView;
    UILabel * _buttonLabel;
    UIImageView * _cardArtImageView;
    UIView * _cardView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    bool  _isUsingFallbackImage;
    bool  _isValidatingMessage;
    UILabel * _leftTitleLabel;
    PKSharingMessageExtensionViewProperties * _properties;
    UILabel * _rightTitleLabel;
    UIActivityIndicatorView * _spinner;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, retain) PKSharingMessageExtensionViewProperties *properties;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_setupBubbleView;
- (void)beginValidateMessage;
- (void)completeValidateMessage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)init;
- (void)layoutSubviews;
- (id)properties;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setProperties:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
