
@interface MSPPin : PBCodable <NSCopying> {
    MSPDroppedPin * _droppedPin;
}

@property (nonatomic, retain) MSPDroppedPin *droppedPin;
@property (nonatomic, readonly) bool hasDroppedPin;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)droppedPin;
- (bool)hasDroppedPin;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDroppedPin:(id)arg1;
- (void)writeTo:(id)arg1;

@end
