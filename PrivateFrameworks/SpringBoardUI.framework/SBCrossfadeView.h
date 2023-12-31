
@interface SBCrossfadeView : UIView {
    bool  _adaptsAnimationFactoryTimingFunction;
    bool  _allowsGroupOpacityDuringCrossfade;
    BSUIAnimationFactory * _animationFactory;
    bool  _crossfaded;
    UIView * _endView;
    UIView * _startView;
    bool  _translucent;
}

@property (nonatomic) bool adaptsAnimationFactoryTimingFunction;
@property (nonatomic) bool allowsGroupOpacityDuringCrossfade;
@property (nonatomic, retain) BSUIAnimationFactory *animationFactory;

+ (id)crossfadeViewWithStartView:(id)arg1 endView:(id)arg2 translucent:(bool)arg3;

- (void).cxx_destruct;
- (id)_initWithStartView:(id)arg1 endView:(id)arg2 translucent:(bool)arg3;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)adaptsAnimationFactoryTimingFunction;
- (bool)allowsGroupOpacityDuringCrossfade;
- (id)animationFactory;
- (void)crossfadeWithCompletion:(id /* block */)arg1;
- (void)layoutSubviews;
- (void)setAdaptsAnimationFactoryTimingFunction:(bool)arg1;
- (void)setAllowsGroupOpacityDuringCrossfade:(bool)arg1;
- (void)setAnimationFactory:(id)arg1;

@end
