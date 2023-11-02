
@protocol SBUIAnimationControllerTransitionContextProvider <NSObject>

@required

- (NSSet *)fromApplicationSceneEntities;
- (NSSet *)toApplicationSceneEntities;

@end
