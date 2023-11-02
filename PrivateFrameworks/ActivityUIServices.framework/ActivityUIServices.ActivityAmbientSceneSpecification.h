
@interface ActivityUIServices.ActivityAmbientSceneSpecification : ActivityUIServices.ActivitySceneSpecificationBase

@property (nonatomic, readonly) NSArray *defaultExtensions;
@property (nonatomic, readonly) NSString *uiSceneSessionRole;

- (id)defaultExtensions;
- (id)init;
- (id)uiSceneSessionRole;

@end
