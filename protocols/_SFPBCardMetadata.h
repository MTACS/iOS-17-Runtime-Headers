
@protocol _SFPBCardMetadata <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isServerEntity;
- (NSData *)jsonData;
- (NSString *)queryToSearchAcrossAllDomains;
- (void)setIsServerEntity:(bool)arg1;
- (void)setQueryToSearchAcrossAllDomains:(NSString *)arg1;

@end
