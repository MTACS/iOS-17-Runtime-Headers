
@interface HDCloudSyncCodableSharedSummaryAuthorizationRecord : PBCodable <NSCopying> {
    NSMutableArray * _authorizationCategories;
    NSString * _uuid;
}

@property (nonatomic, retain) NSMutableArray *authorizationCategories;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) NSString *uuid;

+ (Class)authorizationCategoriesType;

- (void).cxx_destruct;
- (void)addAuthorizationCategories:(id)arg1;
- (id)authorizationCategories;
- (id)authorizationCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)authorizationCategoriesCount;
- (void)clearAuthorizationCategories;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthorizationCategories:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
