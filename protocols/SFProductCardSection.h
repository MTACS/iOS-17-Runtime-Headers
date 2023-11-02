
@protocol SFProductCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSData *)productJSON;
- (void)setProductJSON:(NSData *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
