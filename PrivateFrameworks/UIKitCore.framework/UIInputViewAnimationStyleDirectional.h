
@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle {
    int  _outDirection;
}

@property (nonatomic) int outDirection;

+ (id)animationStyleAnimated:(bool)arg1 duration:(double)arg2 outDirection:(int)arg3;

- (bool)canDismissWithScrollView;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endPlacementForInputViewSet:(id)arg1 windowScene:(id)arg2;
- (bool)isEqual:(id)arg1;
- (int)outDirection;
- (void)setOutDirection:(int)arg1;
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 windowScene:(id)arg3;

@end
