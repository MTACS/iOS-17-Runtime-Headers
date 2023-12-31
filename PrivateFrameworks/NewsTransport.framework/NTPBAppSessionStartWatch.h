
@interface NTPBAppSessionStartWatch : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionStartMethodWatch : 1; 
    }  _has;
    int  _sessionStartMethodWatch;
}

@property (nonatomic) bool hasSessionStartMethodWatch;
@property (nonatomic) int sessionStartMethodWatch;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionStartMethodWatch;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sessionStartMethodWatch;
- (void)setHasSessionStartMethodWatch:(bool)arg1;
- (void)setSessionStartMethodWatch:(int)arg1;
- (void)writeTo:(id)arg1;

@end
