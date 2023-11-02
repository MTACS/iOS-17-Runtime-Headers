
@interface SAUIPluginSnippet : SAUISnippet

@property (nonatomic, copy) NSString *bundleName;
@property (nonatomic, copy) NSData *modelData;
@property (nonatomic, copy) NSString *responseViewId;

- (id)bundleName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)modelData;
- (id)responseViewId;
- (void)setBundleName:(id)arg1;
- (void)setModelData:(id)arg1;
- (void)setResponseViewId:(id)arg1;

@end
