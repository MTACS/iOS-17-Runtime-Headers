
@protocol SFCardSearchMetadata <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
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
