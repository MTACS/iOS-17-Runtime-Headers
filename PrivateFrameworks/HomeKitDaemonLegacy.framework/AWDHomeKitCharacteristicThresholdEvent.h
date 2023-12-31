
@interface AWDHomeKitCharacteristicThresholdEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int maxPresent : 1; 
        unsigned int minPresent : 1; 
    }  _has;
    bool  _maxPresent;
    bool  _minPresent;
}

@property (nonatomic) bool hasMaxPresent;
@property (nonatomic) bool hasMinPresent;
@property (nonatomic) bool maxPresent;
@property (nonatomic) bool minPresent;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxPresent;
- (bool)hasMinPresent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)maxPresent;
- (void)mergeFrom:(id)arg1;
- (bool)minPresent;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxPresent:(bool)arg1;
- (void)setHasMinPresent:(bool)arg1;
- (void)setMaxPresent:(bool)arg1;
- (void)setMinPresent:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
