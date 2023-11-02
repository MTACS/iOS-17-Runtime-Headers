
@interface CKDPStorageExpiration : PBCodable <NSCopying> {
    unsigned long long  _duration;
    double  _expirationTime;
    struct { 
        unsigned int duration : 1; 
        unsigned int expirationTime : 1; 
        unsigned int operationType : 1; 
    }  _has;
    int  _operationType;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) double expirationTime;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasExpirationTime;
@property (nonatomic) bool hasOperationType;
@property (nonatomic) int operationType;

- (int)StringAsOperationType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (double)expirationTime;
- (bool)hasDuration;
- (bool)hasExpirationTime;
- (bool)hasOperationType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)operationType;
- (id)operationTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setExpirationTime:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasExpirationTime:(bool)arg1;
- (void)setHasOperationType:(bool)arg1;
- (void)setOperationType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
