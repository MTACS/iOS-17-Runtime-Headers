
@interface BMPBSchoolTimeEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int reason : 1; 
        unsigned int starting : 1; 
    }  _has;
    int  _reason;
    bool  _starting;
}

@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasStarting;
@property (nonatomic) int reason;
@property (nonatomic) bool starting;

- (int)StringAsReason:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (bool)hasStarting;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasStarting:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setStarting:(bool)arg1;
- (bool)starting;
- (void)writeTo:(id)arg1;

@end
