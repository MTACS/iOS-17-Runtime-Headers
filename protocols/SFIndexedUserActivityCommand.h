
@protocol SFIndexedUserActivityCommand <SFCommand>

@required

- (NSString *)applicationBundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setUserActivityRequiredString:(NSString *)arg1;
- (NSString *)userActivityRequiredString;

@end
