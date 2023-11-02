
@protocol EXBDisplayProfileConfiguring <NSObject>

@required

- (void)deriveWithIdentifier:(NSString *)arg1;
- (void)setCloningSupported:(bool)arg1;
- (void)setDeactivationReasonsWhenActive:(unsigned long long)arg1;
- (void)setMainLike:(bool)arg1;
- (void)setPriorityLevel:(unsigned long long)arg1 sceneSpecification:(FBSSceneSpecification *)arg2;

@end
