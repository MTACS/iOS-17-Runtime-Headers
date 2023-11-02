
@interface BMPBFindMyLocationChangeEvent : PBCodable <NSCopying> {
    int  _activityState;
    struct { 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int activityState : 1; 
        unsigned int locationChangeType : 1; 
    }  _has;
    NSString * _idsHandle;
    double  _latitude;
    int  _locationChangeType;
    double  _longitude;
    NSString * _name;
}

@property (nonatomic) int activityState;
@property (nonatomic) bool hasActivityState;
@property (nonatomic, readonly) bool hasIdsHandle;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLocationChangeType;
@property (nonatomic) bool hasLongitude;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *idsHandle;
@property (nonatomic) double latitude;
@property (nonatomic) int locationChangeType;
@property (nonatomic) double longitude;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (int)StringAsActivityState:(id)arg1;
- (int)StringAsLocationChangeType:(id)arg1;
- (int)activityState;
- (id)activityStateAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivityState;
- (bool)hasIdsHandle;
- (bool)hasLatitude;
- (bool)hasLocationChangeType;
- (bool)hasLongitude;
- (bool)hasName;
- (unsigned long long)hash;
- (id)idsHandle;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (int)locationChangeType;
- (id)locationChangeTypeAsString:(int)arg1;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setActivityState:(int)arg1;
- (void)setHasActivityState:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLocationChangeType:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setIdsHandle:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLocationChangeType:(int)arg1;
- (void)setLongitude:(double)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
