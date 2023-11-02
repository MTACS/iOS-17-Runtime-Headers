
@interface UIDebuggingInformationContainerView : UIView {
    bool  _shadowHidden;
    UIView * _shadowView;
}

@property (nonatomic) bool shadowHidden;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setShadowHidden:(bool)arg1;
- (bool)shadowHidden;

@end
