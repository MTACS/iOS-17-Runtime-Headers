
@protocol _SFPBOpenMediaCommand <NSObject>

@required

- (NSString *)clientSelectedBundleIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBMediaMetadata *)mediaMetadata;
- (void)setClientSelectedBundleIdentifier:(NSString *)arg1;
- (void)setMediaMetadata:(_SFPBMediaMetadata *)arg1;

@end
