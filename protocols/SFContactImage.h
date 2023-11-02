
@protocol SFContactImage <SFImage>

@required

- (NSString *)appIconBadgeBundleIdentifier;
- (NSArray *)contactIdentifiers;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setAppIconBadgeBundleIdentifier:(NSString *)arg1;
- (void)setContactIdentifiers:(NSArray *)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (bool)threeDTouchEnabled;

@end
