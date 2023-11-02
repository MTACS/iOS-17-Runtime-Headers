
@interface _UIViewHostingSceneSpecification : UIWindowSceneSpecification

- (bool)isInternal;
- (bool)isUIKitManaged;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;

@end
