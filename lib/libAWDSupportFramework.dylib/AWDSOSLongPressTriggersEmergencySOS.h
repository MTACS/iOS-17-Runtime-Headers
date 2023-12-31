
@interface AWDSOSLongPressTriggersEmergencySOS : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int longPressTriggersEmergencySOS : 1; 
    }  _has;
    bool  _longPressTriggersEmergencySOS;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasLongPressTriggersEmergencySOS;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool longPressTriggersEmergencySOS;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLongPressTriggersEmergencySOS;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)longPressTriggersEmergencySOS;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLongPressTriggersEmergencySOS:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLongPressTriggersEmergencySOS:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
