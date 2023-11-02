
@interface AWDCoreRoutinePersistenceMirroringAccountDevices : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int topDeviceClass : 1; 
        unsigned int totalPlaces : 1; 
        unsigned int totalTransitions : 1; 
        unsigned int totalVisits : 1; 
    }  _has;
    NSMutableArray * _profiles;
    unsigned long long  _timestamp;
    int  _topDeviceClass;
    int  _totalPlaces;
    int  _totalTransitions;
    int  _totalVisits;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTopDeviceClass;
@property (nonatomic) bool hasTotalPlaces;
@property (nonatomic) bool hasTotalTransitions;
@property (nonatomic) bool hasTotalVisits;
@property (nonatomic, retain) NSMutableArray *profiles;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int topDeviceClass;
@property (nonatomic) int totalPlaces;
@property (nonatomic) int totalTransitions;
@property (nonatomic) int totalVisits;

+ (Class)profilesType;

- (void)addProfiles:(id)arg1;
- (void)clearProfiles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasTopDeviceClass;
- (bool)hasTotalPlaces;
- (bool)hasTotalTransitions;
- (bool)hasTotalVisits;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)profiles;
- (id)profilesAtIndex:(unsigned long long)arg1;
- (unsigned long long)profilesCount;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTopDeviceClass:(bool)arg1;
- (void)setHasTotalPlaces:(bool)arg1;
- (void)setHasTotalTransitions:(bool)arg1;
- (void)setHasTotalVisits:(bool)arg1;
- (void)setProfiles:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTopDeviceClass:(int)arg1;
- (void)setTotalPlaces:(int)arg1;
- (void)setTotalTransitions:(int)arg1;
- (void)setTotalVisits:(int)arg1;
- (unsigned long long)timestamp;
- (int)topDeviceClass;
- (int)totalPlaces;
- (int)totalTransitions;
- (int)totalVisits;
- (void)writeTo:(id)arg1;

@end
