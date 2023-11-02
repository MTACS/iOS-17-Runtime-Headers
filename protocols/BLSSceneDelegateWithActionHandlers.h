
@protocol BLSSceneDelegateWithActionHandlers <FBSceneDelegate>

@optional

- (void)addActionHandler:(id <BLSSceneActionHandler>)arg1 forScene:(FBScene *)arg2;
- (void)removeActionHandler:(id <BLSSceneActionHandler>)arg1 forScene:(FBScene *)arg2;

@end
