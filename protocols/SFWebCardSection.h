
@protocol SFWebCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSString *)htmlString;
- (NSData *)jsonData;
- (void)setHtmlString:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
