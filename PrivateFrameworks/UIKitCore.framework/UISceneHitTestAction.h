
@interface UISceneHitTestAction : BSAction

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } touchLocation;

- (long long)UIActionType;
- (id)initWithTouchLocation:(struct CGPoint { double x1; double x2; })arg1 responseHandler:(id /* block */)arg2;
- (void)sendResponse:(id)arg1;
- (struct CGPoint { double x1; double x2; })touchLocation;

@end
