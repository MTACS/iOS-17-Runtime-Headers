
@interface _TVStackCollectionViewCell : UICollectionViewCell {
    UIView * _cellContentView;
    long long  _pressesEventDepth;
    UIView * _stowedContentView;
    UIViewController * _viewController;
}

@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_pressesDidEnd;
- (bool)canBecomeFocused;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)prepareForReuse;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
