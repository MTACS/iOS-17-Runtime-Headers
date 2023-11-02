
@interface SAEndpointPlugin : SAEndpoint

@property (nonatomic, copy) NSString *pluginPath;

+ (id)endpointPlugin;
+ (id)endpointPluginWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)pluginPath;
- (void)setPluginPath:(id)arg1;

@end
