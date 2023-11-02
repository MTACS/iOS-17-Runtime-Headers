
@protocol SFCardMetadata <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (bool)isServerEntity;
- (NSData *)jsonData;
- (NSString *)queryToSearchAcrossAllDomains;
- (void)setIsServerEntity:(bool)arg1;
- (void)setQueryToSearchAcrossAllDomains:(NSString *)arg1;

@end
