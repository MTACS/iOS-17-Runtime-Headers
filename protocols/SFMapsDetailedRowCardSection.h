
@protocol SFMapsDetailedRowCardSection <SFCardSection>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSData *)mapsData;
- (NSString *)pinText;
- (void)setMapsData:(NSData *)arg1;
- (void)setPinText:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
