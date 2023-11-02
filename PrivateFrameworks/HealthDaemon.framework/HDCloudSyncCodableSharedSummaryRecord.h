
@interface HDCloudSyncCodableSharedSummaryRecord : PBCodable <NSCopying> {
    NSMutableArray * _authorizationCategories;
    NSString * _compatibilityVersion;
    NSString * _name;
    NSMutableArray * _objectTypeIdentifiers;
    NSString * _package;
    NSData * _summaryData;
    NSString * _uuid;
    NSString * _version;
}

@property (nonatomic, retain) NSMutableArray *authorizationCategories;
@property (nonatomic, retain) NSString *compatibilityVersion;
@property (nonatomic, readonly) bool hasCompatibilityVersion;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasPackage;
@property (nonatomic, readonly) bool hasSummaryData;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *objectTypeIdentifiers;
@property (nonatomic, retain) NSString *package;
@property (nonatomic, retain) NSData *summaryData;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, retain) NSString *version;

+ (Class)authorizationCategoriesType;
+ (Class)objectTypeIdentifiersType;

- (void).cxx_destruct;
- (void)addAuthorizationCategories:(id)arg1;
- (void)addObjectTypeIdentifiers:(id)arg1;
- (id)authorizationCategories;
- (id)authorizationCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)authorizationCategoriesCount;
- (void)clearAuthorizationCategories;
- (void)clearObjectTypeIdentifiers;
- (id)compatibilityVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompatibilityVersion;
- (bool)hasName;
- (bool)hasPackage;
- (bool)hasSummaryData;
- (bool)hasUuid;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)objectTypeIdentifiers;
- (id)objectTypeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)objectTypeIdentifiersCount;
- (id)package;
- (bool)readFrom:(id)arg1;
- (void)setAuthorizationCategories:(id)arg1;
- (void)setCompatibilityVersion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectTypeIdentifiers:(id)arg1;
- (void)setPackage:(id)arg1;
- (void)setSummaryData:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)summaryData;
- (id)uuid;
- (id)version;
- (void)writeTo:(id)arg1;

@end
