
@interface AWDCoreRoutinePersistenceStoreMigrationDuration : PBCodable <NSCopying> {
    int  _byteSize;
    int  _deviceClass;
    bool  _didVacuum;
    struct { 
        unsigned int migrationTimeInterval : 1; 
        unsigned int timestamp : 1; 
        unsigned int byteSize : 1; 
        unsigned int deviceClass : 1; 
        unsigned int nextModelVersion : 1; 
        unsigned int previousModelVersion : 1; 
        unsigned int storeType : 1; 
        unsigned int didVacuum : 1; 
    }  _has;
    double  _migrationTimeInterval;
    int  _nextModelVersion;
    int  _previousModelVersion;
    int  _storeType;
    unsigned long long  _timestamp;
}

@property (nonatomic) int byteSize;
@property (nonatomic) int deviceClass;
@property (nonatomic) bool didVacuum;
@property (nonatomic) bool hasByteSize;
@property (nonatomic) bool hasDeviceClass;
@property (nonatomic) bool hasDidVacuum;
@property (nonatomic) bool hasMigrationTimeInterval;
@property (nonatomic) bool hasNextModelVersion;
@property (nonatomic) bool hasPreviousModelVersion;
@property (nonatomic) bool hasStoreType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) double migrationTimeInterval;
@property (nonatomic) int nextModelVersion;
@property (nonatomic) int previousModelVersion;
@property (nonatomic) int storeType;
@property (nonatomic) unsigned long long timestamp;

- (int)byteSize;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceClass;
- (id)dictionaryRepresentation;
- (bool)didVacuum;
- (bool)hasByteSize;
- (bool)hasDeviceClass;
- (bool)hasDidVacuum;
- (bool)hasMigrationTimeInterval;
- (bool)hasNextModelVersion;
- (bool)hasPreviousModelVersion;
- (bool)hasStoreType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)migrationTimeInterval;
- (int)nextModelVersion;
- (int)previousModelVersion;
- (bool)readFrom:(id)arg1;
- (void)setByteSize:(int)arg1;
- (void)setDeviceClass:(int)arg1;
- (void)setDidVacuum:(bool)arg1;
- (void)setHasByteSize:(bool)arg1;
- (void)setHasDeviceClass:(bool)arg1;
- (void)setHasDidVacuum:(bool)arg1;
- (void)setHasMigrationTimeInterval:(bool)arg1;
- (void)setHasNextModelVersion:(bool)arg1;
- (void)setHasPreviousModelVersion:(bool)arg1;
- (void)setHasStoreType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMigrationTimeInterval:(double)arg1;
- (void)setNextModelVersion:(int)arg1;
- (void)setPreviousModelVersion:(int)arg1;
- (void)setStoreType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)storeType;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
