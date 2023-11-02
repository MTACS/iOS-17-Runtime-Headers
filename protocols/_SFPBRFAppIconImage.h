
@protocol _SFPBRFAppIconImage <NSObject>

@required

- (NSString *)application_bundle_identifier;
- (int)image_style;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setApplication_bundle_identifier:(NSString *)arg1;
- (void)setImage_style:(int)arg1;

@end
