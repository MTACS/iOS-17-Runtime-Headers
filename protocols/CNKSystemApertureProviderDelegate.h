
@protocol CNKSystemApertureProviderDelegate

@required

- (NSSet *)backgroundActivitiesToSuppress;
- (NSString *)inCallSceneSessionIdentifier;

@end
