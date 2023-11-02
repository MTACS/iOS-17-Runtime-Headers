
@protocol SFKeyValueDataCardSection <SFCardSection>

@required

- (SFImage *)accessoryImage;
- (NSArray *)data;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setAccessoryImage:(SFImage *)arg1;
- (void)setData:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
