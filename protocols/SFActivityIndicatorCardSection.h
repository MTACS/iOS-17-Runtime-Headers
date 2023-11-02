
@protocol SFActivityIndicatorCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setText:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)text;
- (NSString *)type;

@end
