
@interface BLSBacklightSceneUpdateAction : BSAction

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, readonly) BLSBacklightChangeEvent *event;
@property (nonatomic, readonly) bool isUpdateToDateSpecifier;
@property (getter=isTouchTargetable, nonatomic, readonly) bool touchTargetable;

- (id)event;
- (id)initWithBacklightChangeEvent:(id)arg1 animated:(bool)arg2 touchTargetable:(bool)arg3 isUpdateToDateSpecifier:(bool)arg4 completion:(id /* block */)arg5;
- (bool)isAnimated;
- (bool)isTouchTargetable;
- (bool)isUpdateToDateSpecifier;

@end
