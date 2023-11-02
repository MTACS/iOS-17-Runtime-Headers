
@protocol SBTestRecipe <SBVolumePressBandit>

@required

- (NSString *)title;

@optional

+ (bool)shouldRegisterTestRecipe;

- (Class)domainClass;
- (void)windowSceneDidUpdate:(SBWindowScene *)arg1;

@end
