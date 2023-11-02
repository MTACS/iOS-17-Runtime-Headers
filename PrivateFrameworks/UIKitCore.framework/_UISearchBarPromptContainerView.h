
@interface _UISearchBarPromptContainerView : UIView {
    long long  _barMetrics;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    UILabel * _promptLabel;
}

@property (nonatomic) long long barMetrics;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, retain) UILabel *promptLabel;

- (void).cxx_destruct;
- (bool)_isKnownUISearchBarComponentContainer;
- (long long)barMetrics;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)description;
- (void)layoutSubviews;
- (id)promptLabel;
- (void)setBarMetrics:(long long)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPromptLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)useMini;

@end
