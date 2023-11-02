
@interface TPPBPeerStableInfoSetting : PBCodable <NSCopying> {
    unsigned long long  _clock;
    struct { 
        unsigned int clock : 1; 
        unsigned int value : 1; 
    }  _has;
    bool  _value;
}

@property (nonatomic) unsigned long long clock;
@property (nonatomic) bool hasClock;
@property (nonatomic) bool hasValue;
@property (nonatomic) bool value;

- (unsigned long long)clock;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClock;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClock:(unsigned long long)arg1;
- (void)setHasClock:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(bool)arg1;
- (bool)value;
- (void)writeTo:(id)arg1;

@end
