
@protocol RFAppIconImage <NSObject>

@required

- (NSString *)application_bundle_identifier;
- (NSDictionary *)dictionaryRepresentation;
- (int)image_style;
- (NSData *)jsonData;
- (void)setApplication_bundle_identifier:(NSString *)arg1;
- (void)setImage_style:(int)arg1;

@end
