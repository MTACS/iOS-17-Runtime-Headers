
@interface _CSProminentDisplayBackgroundWrapperView : UIView {
    UIView * _wrappedView;
}

@property (nonatomic) UIView *wrappedView;

- (void).cxx_destruct;
- (void)addSubview:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)exchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)layoutSubviews;
- (void)sendSubviewToBack:(id)arg1;
- (void)setWrappedView:(id)arg1;
- (id)wrappedView;

@end
