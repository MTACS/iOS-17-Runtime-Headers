
@interface PKBorderedButton : UIButton {
    UIView * _bottomBorder;
    UIView * _leadingBorder;
    UIView * _topBorder;
    UIView * _trailingBorder;
}

@property (nonatomic, copy) PKBorderedButtonConfiguration *borderConfiguration;

+ (id)borderedButtonWithConfiguration:(id)arg1 primaryAction:(id)arg2;

- (void).cxx_destruct;
- (void)_updateForConfigurationChange;
- (id)borderConfiguration;
- (void)layoutSubviews;
- (void)setBorderConfiguration:(id)arg1;

@end
