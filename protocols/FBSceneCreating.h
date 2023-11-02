
@protocol FBSceneCreating <NSObject>

@required

- (void)setClientIdentity:(id <FBSSceneClientIdentifying>)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setSpecification:(FBSSceneSpecification *)arg1;

@end
