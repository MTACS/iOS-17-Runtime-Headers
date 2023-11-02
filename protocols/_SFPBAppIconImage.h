
@protocol _SFPBAppIconImage <NSObject>

@required

- (NSString *)bundleIdentifier;
- (int)iconType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setIconType:(int)arg1;

@end
