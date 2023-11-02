
@interface CCUIContentModuleContainerView : UIView {
    bool  _ignoreFrameUpdates;
    NSString * _moduleIdentifier;
    unsigned long long  _options;
    NSArray * _views;
}

@property (nonatomic, readonly) UIView *c2AnimationContainerView;
@property (nonatomic, readonly) UIView *caAnimationContainerView;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) bool ignoreFrameUpdates;
@property (nonatomic, readonly, copy) NSString *moduleIdentifier;

- (void).cxx_destruct;
- (id)c2AnimationContainerView;
- (id)caAnimationContainerView;
- (id)containerView;
- (bool)ignoreFrameUpdates;
- (id)initWithModuleIdentifier:(id)arg1 options:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)moduleIdentifier;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setIgnoreFrameUpdates:(bool)arg1;

@end
