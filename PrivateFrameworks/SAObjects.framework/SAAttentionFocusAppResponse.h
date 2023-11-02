
@interface SAAttentionFocusAppResponse : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSString *sceneId;

- (id)appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)sceneId;
- (void)setAppBundleId:(id)arg1;
- (void)setSceneId:(id)arg1;

@end
