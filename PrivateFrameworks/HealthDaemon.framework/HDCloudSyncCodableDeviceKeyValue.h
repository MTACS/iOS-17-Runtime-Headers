
@interface HDCloudSyncCodableDeviceKeyValue : PBCodable <NSCopying> {
    NSString * _domain;
    struct { 
        unsigned int modificationDate : 1; 
        unsigned int protectionCategory : 1; 
    }  _has;
    NSString * _key;
    double  _modificationDate;
    long long  _protectionCategory;
    HDCodableSyncIdentity * _syncIdentity;
    NSData * _value;
}

@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic) bool hasProtectionCategory;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) double modificationDate;
@property (nonatomic) long long protectionCategory;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic, retain) NSData *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasDomain;
- (bool)hasKey;
- (bool)hasModificationDate;
- (bool)hasProtectionCategory;
- (bool)hasSyncIdentity;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (long long)protectionCategory;
- (bool)readFrom:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setHasProtectionCategory:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setProtectionCategory:(long long)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setValue:(id)arg1;
- (id)syncIdentity;
- (id)value;
- (void)writeTo:(id)arg1;

@end
