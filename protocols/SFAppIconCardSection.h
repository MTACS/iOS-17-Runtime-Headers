
@protocol SFAppIconCardSection <SFCardSection>

@required

- (NSString *)applicationBundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)title;
- (NSString *)type;

@end
