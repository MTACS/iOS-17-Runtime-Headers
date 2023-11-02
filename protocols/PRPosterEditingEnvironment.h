
@protocol PRPosterEditingEnvironment <PRPosterEnvironment>

@required

- (<PRPosterContents> *)sourceContents;
- (PRMutablePosterConfiguration *)targetConfiguration;

@end
