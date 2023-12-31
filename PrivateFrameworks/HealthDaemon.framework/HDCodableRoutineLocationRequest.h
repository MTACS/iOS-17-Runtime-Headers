
@interface HDCodableRoutineLocationRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int locationType : 1; 
    }  _has;
    int  _locationType;
}

@property (nonatomic) bool hasLocationType;
@property (nonatomic) int locationType;

- (int)StringAsLocationType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocationType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)locationType;
- (id)locationTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLocationType:(bool)arg1;
- (void)setLocationType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
