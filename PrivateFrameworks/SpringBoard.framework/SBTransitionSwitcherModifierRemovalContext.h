
@interface SBTransitionSwitcherModifierRemovalContext : NSObject {
    long long  _animationStyle;
    SBDisplayItem * _displayItem;
}

@property (nonatomic, readonly) long long animationStyle;
@property (nonatomic, readonly) SBDisplayItem *displayItem;

- (void).cxx_destruct;
- (long long)animationStyle;
- (id)displayItem;
- (id)initWithAnimationStyle:(long long)arg1 displayItem:(id)arg2;

@end
