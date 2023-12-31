
@interface SBUIInteractionForwardingView : UIView {
    NSHashTable * _ignoreAlphaSubviewsTable;
}

@property (nonatomic, copy) NSSet *ignoreAlphaSubviews;

- (void).cxx_destruct;
- (void)addIgnoreAlphaSubview:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)ignoreAlphaSubviews;
- (void)removeIgnoreAlphaSubview:(id)arg1;
- (void)setIgnoreAlphaSubviews:(id)arg1;

@end
