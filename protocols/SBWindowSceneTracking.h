
@protocol SBWindowSceneTracking <NSObject>

@required

- (SBWindowScene *)activeDisplayWindowScene;
- (SBWindowScene *)embeddedDisplayWindowScene;

@end
