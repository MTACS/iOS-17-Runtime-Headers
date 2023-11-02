
@protocol FBSComponentScene <FBSSceneExtensible>

@required

- (FBSSceneClientSettings *)clientSettings;
- (NSString *)loggingIdentifier;
- (void)sendActions:(NSSet *)arg1;
- (void)sendPrivateActions:(NSSet *)arg1;
- (FBSSceneSettings *)settings;
- (<FBSSceneComponent> *)siblingComponentOfClass:(Class)arg1;

@end
