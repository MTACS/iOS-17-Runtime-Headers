
@interface HDCodableSyncStateOrigin : PBCodable <NSCopying> {
    NSString * _build;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int majorVersion : 1; 
        unsigned int minorVersion : 1; 
        unsigned int patchVersion : 1; 
    }  _has;
    int  _majorVersion;
    int  _minorVersion;
    int  _patchVersion;
    NSString * _productType;
    HDCodableSyncIdentity * _syncIdentity;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *build;
@property (nonatomic, readonly) bool hasBuild;
@property (nonatomic) bool hasMajorVersion;
@property (nonatomic) bool hasMinorVersion;
@property (nonatomic) bool hasPatchVersion;
@property (nonatomic, readonly) bool hasProductType;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int majorVersion;
@property (nonatomic) int minorVersion;
@property (nonatomic) int patchVersion;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)build;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuild;
- (bool)hasMajorVersion;
- (bool)hasMinorVersion;
- (bool)hasPatchVersion;
- (bool)hasProductType;
- (bool)hasSyncIdentity;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)majorVersion;
- (void)mergeFrom:(id)arg1;
- (int)minorVersion;
- (int)patchVersion;
- (id)productType;
- (bool)readFrom:(id)arg1;
- (void)setBuild:(id)arg1;
- (void)setHasMajorVersion:(bool)arg1;
- (void)setHasMinorVersion:(bool)arg1;
- (void)setHasPatchVersion:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMajorVersion:(int)arg1;
- (void)setMinorVersion:(int)arg1;
- (void)setPatchVersion:(int)arg1;
- (void)setProductType:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)syncIdentity;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
