
@protocol SFSearchInAppCommand <SFCommand>

@required

- (NSString *)applicationBundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)searchString;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setSearchString:(NSString *)arg1;

@end
