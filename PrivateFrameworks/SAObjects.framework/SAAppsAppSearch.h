
@interface SAAppsAppSearch : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *applicationName;

+ (id)appSearch;
+ (id)appSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)applicationName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setApplicationName:(id)arg1;

@end
