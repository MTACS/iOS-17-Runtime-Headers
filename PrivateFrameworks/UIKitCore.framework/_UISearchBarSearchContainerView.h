
@interface _UISearchBarSearchContainerView : UIView {
    bool  _frozenLayout;
    _UISearchBarSearchContainerLayout * _layout;
    bool  _needsLayoutWhenThawed;
}

@property (nonatomic) bool frozenLayout;
@property (nonatomic, retain) _UISearchBarSearchContainerLayout *layout;

- (void).cxx_destruct;
- (bool)_isKnownUISearchBarComponentContainer;
- (id)description;
- (bool)frozenLayout;
- (id)layout;
- (void)layoutSubviews;
- (void)setFrozenLayout:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setNeedsLayout;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
