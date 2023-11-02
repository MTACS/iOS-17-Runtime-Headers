
@interface AWDCoreRoutinePersistenceMirroringDeviceProfile : PBCodable <NSCopying> {
    int  _ageOfDevice;
    int  _deviceClass;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int ageOfDevice : 1; 
        unsigned int deviceClass : 1; 
        unsigned int placesAssociatedToDevice : 1; 
        unsigned int timeIntervalSinceLastRecordAssociation : 1; 
        unsigned int transitionsAssociatedToDevice : 1; 
        unsigned int visitsAssociatedToDevice : 1; 
    }  _has;
    int  _placesAssociatedToDevice;
    int  _timeIntervalSinceLastRecordAssociation;
    unsigned long long  _timestamp;
    int  _transitionsAssociatedToDevice;
    int  _visitsAssociatedToDevice;
}

@property (nonatomic) int ageOfDevice;
@property (nonatomic) int deviceClass;
@property (nonatomic) bool hasAgeOfDevice;
@property (nonatomic) bool hasDeviceClass;
@property (nonatomic) bool hasPlacesAssociatedToDevice;
@property (nonatomic) bool hasTimeIntervalSinceLastRecordAssociation;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransitionsAssociatedToDevice;
@property (nonatomic) bool hasVisitsAssociatedToDevice;
@property (nonatomic) int placesAssociatedToDevice;
@property (nonatomic) int timeIntervalSinceLastRecordAssociation;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int transitionsAssociatedToDevice;
@property (nonatomic) int visitsAssociatedToDevice;

- (int)ageOfDevice;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceClass;
- (id)dictionaryRepresentation;
- (bool)hasAgeOfDevice;
- (bool)hasDeviceClass;
- (bool)hasPlacesAssociatedToDevice;
- (bool)hasTimeIntervalSinceLastRecordAssociation;
- (bool)hasTimestamp;
- (bool)hasTransitionsAssociatedToDevice;
- (bool)hasVisitsAssociatedToDevice;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)placesAssociatedToDevice;
- (bool)readFrom:(id)arg1;
- (void)setAgeOfDevice:(int)arg1;
- (void)setDeviceClass:(int)arg1;
- (void)setHasAgeOfDevice:(bool)arg1;
- (void)setHasDeviceClass:(bool)arg1;
- (void)setHasPlacesAssociatedToDevice:(bool)arg1;
- (void)setHasTimeIntervalSinceLastRecordAssociation:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransitionsAssociatedToDevice:(bool)arg1;
- (void)setHasVisitsAssociatedToDevice:(bool)arg1;
- (void)setPlacesAssociatedToDevice:(int)arg1;
- (void)setTimeIntervalSinceLastRecordAssociation:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransitionsAssociatedToDevice:(int)arg1;
- (void)setVisitsAssociatedToDevice:(int)arg1;
- (int)timeIntervalSinceLastRecordAssociation;
- (unsigned long long)timestamp;
- (int)transitionsAssociatedToDevice;
- (int)visitsAssociatedToDevice;
- (void)writeTo:(id)arg1;

@end
