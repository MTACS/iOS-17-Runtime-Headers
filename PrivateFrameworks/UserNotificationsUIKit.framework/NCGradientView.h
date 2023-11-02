
@interface NCGradientView : UIView {
    CAGradientLayer * _gradient;
    bool  _isVertical;
}

- (void).cxx_destruct;
- (id)initWithHorizontalStartColor:(id)arg1 horizontalEndColor:(id)arg2;
- (id)initWithVerticalStartColor:(id)arg1 verticalEndColor:(id)arg2;
- (void)layoutSubviews;

@end
