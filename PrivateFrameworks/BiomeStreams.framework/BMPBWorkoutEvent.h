
@interface BMPBWorkoutEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int starting : 1; 
    }  _has;
    bool  _starting;
}

@property (nonatomic) bool hasStarting;
@property (nonatomic) bool starting;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStarting;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStarting:(bool)arg1;
- (void)setStarting:(bool)arg1;
- (bool)starting;
- (void)writeTo:(id)arg1;

@end
