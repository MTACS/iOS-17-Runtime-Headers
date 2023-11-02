
@interface AMSUICommonView : UIView {
    NSString * _accessibilityElementLabel;
    unsigned long long  _edgesPropagatingSafeAreaInsetsToSubviews;
}

@property (nonatomic, readonly) NSString *accessibilityElementLabel;
@property (nonatomic) unsigned long long edgesPropagatingSafeAreaInsetsToSubviews;

- (void).cxx_destruct;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (void)_setup;
- (id)accessibilityElementLabel;
- (id)accessibilityLabel;
- (unsigned long long)edgesPropagatingSafeAreaInsetsToSubviews;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEdgesPropagatingSafeAreaInsetsToSubviews:(unsigned long long)arg1;
- (id)tintColor;

@end
