
@protocol SXWebContentComponent <SXComponent>

@required

- (NSURL *)URL;
- (SXJSONDictionary *)dataSourceReferences;
- (NSString *)resourceIdentifier;

@end
