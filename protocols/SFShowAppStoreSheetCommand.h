
@protocol SFShowAppStoreSheetCommand <SFCommand>

@required

- (NSString *)applicationBundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setStoreIdentifier:(NSString *)arg1;
- (NSString *)storeIdentifier;

@end
