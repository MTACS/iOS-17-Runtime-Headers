
@protocol BLSSceneActionHandler <NSObject>

@required

- (NSSet *)respondToActions:(NSSet *)arg1 forFBScene:(FBScene *)arg2;

@end
