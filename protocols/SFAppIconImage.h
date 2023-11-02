
@protocol SFAppIconImage <SFImage>

@required

- (NSString *)bundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (int)iconType;
- (NSData *)jsonData;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setIconType:(int)arg1;

@end
