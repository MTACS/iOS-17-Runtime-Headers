
@interface NTPBAppSessionEndWatch : PBCodable <NSCopying> {
    struct { 
        unsigned int watchAppSessionDuration : 1; 
    }  _has;
    long long  _watchAppSessionDuration;
}

@property (nonatomic) bool hasWatchAppSessionDuration;
@property (nonatomic) long long watchAppSessionDuration;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWatchAppSessionDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasWatchAppSessionDuration:(bool)arg1;
- (void)setWatchAppSessionDuration:(long long)arg1;
- (long long)watchAppSessionDuration;
- (void)writeTo:(id)arg1;

@end
