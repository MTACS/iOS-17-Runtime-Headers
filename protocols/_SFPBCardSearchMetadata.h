
@protocol _SFPBCardSearchMetadata <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isFederatedDomainSearch;
- (bool)isServerEntity;
- (NSData *)jsonData;
- (NSString *)searchQuery;
- (void)setIsFederatedDomainSearch:(bool)arg1;
- (void)setIsServerEntity:(bool)arg1;
- (void)setSearchQuery:(NSString *)arg1;
- (void)setViewConfigName:(NSString *)arg1;
- (NSString *)viewConfigName;

@end
