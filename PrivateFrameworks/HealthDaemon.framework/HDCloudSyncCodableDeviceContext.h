
@interface HDCloudSyncCodableDeviceContext : PBCodable <NSCopying> {
    NSString * _currentOSName;
    NSString * _currentOSVersion;
    struct { 
        unsigned int modificationDate : 1; 
        unsigned int type : 1; 
    }  _has;
    double  _modificationDate;
    NSString * _productTypeName;
    HDCodableSyncIdentity * _syncIdentity;
    long long  _type;
}

@property (nonatomic, retain) NSString *currentOSName;
@property (nonatomic, retain) NSString *currentOSVersion;
@property (nonatomic, readonly) bool hasCurrentOSName;
@property (nonatomic, readonly) bool hasCurrentOSVersion;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic, readonly) bool hasProductTypeName;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic) bool hasType;
@property (nonatomic) double modificationDate;
@property (nonatomic, retain) NSString *productTypeName;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentOSName;
- (id)currentOSVersion;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentOSName;
- (bool)hasCurrentOSVersion;
- (bool)hasModificationDate;
- (bool)hasProductTypeName;
- (bool)hasSyncIdentity;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (id)productTypeName;
- (bool)readFrom:(id)arg1;
- (void)setCurrentOSName:(id)arg1;
- (void)setCurrentOSVersion:(id)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setProductTypeName:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setType:(long long)arg1;
- (id)syncIdentity;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
