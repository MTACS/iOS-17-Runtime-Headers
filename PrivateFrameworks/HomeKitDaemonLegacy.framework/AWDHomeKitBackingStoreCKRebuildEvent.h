
@interface AWDHomeKitBackingStoreCKRebuildEvent : PBCodable <NSCopying> {
    int  _containerType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int containerType : 1; 
        unsigned int rebuildStatus : 1; 
        unsigned int zoneType : 1; 
    }  _has;
    int  _rebuildStatus;
    unsigned long long  _timestamp;
    int  _zoneType;
}

@property (nonatomic) int containerType;
@property (nonatomic) bool hasContainerType;
@property (nonatomic) bool hasRebuildStatus;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasZoneType;
@property (nonatomic) int rebuildStatus;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int zoneType;

- (int)StringAsContainerType:(id)arg1;
- (int)StringAsRebuildStatus:(id)arg1;
- (int)StringAsZoneType:(id)arg1;
- (int)containerType;
- (id)containerTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainerType;
- (bool)hasRebuildStatus;
- (bool)hasTimestamp;
- (bool)hasZoneType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rebuildStatus;
- (id)rebuildStatusAsString:(int)arg1;
- (void)setContainerType:(int)arg1;
- (void)setHasContainerType:(bool)arg1;
- (void)setHasRebuildStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasZoneType:(bool)arg1;
- (void)setRebuildStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setZoneType:(int)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;
- (int)zoneType;
- (id)zoneTypeAsString:(int)arg1;

@end
