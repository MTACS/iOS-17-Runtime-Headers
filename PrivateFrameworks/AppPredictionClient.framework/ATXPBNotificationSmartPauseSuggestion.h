
@interface ATXPBNotificationSmartPauseSuggestion : PBCodable <NSCopying> {
    double  _expirationTimestamp;
    struct { 
        unsigned int expirationTimestamp : 1; 
        unsigned int pauseDuration : 1; 
    }  _has;
    double  _pauseDuration;
}

@property (nonatomic) double expirationTimestamp;
@property (nonatomic) bool hasExpirationTimestamp;
@property (nonatomic) bool hasPauseDuration;
@property (nonatomic) double pauseDuration;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expirationTimestamp;
- (bool)hasExpirationTimestamp;
- (bool)hasPauseDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)pauseDuration;
- (bool)readFrom:(id)arg1;
- (void)setExpirationTimestamp:(double)arg1;
- (void)setHasExpirationTimestamp:(bool)arg1;
- (void)setHasPauseDuration:(bool)arg1;
- (void)setPauseDuration:(double)arg1;
- (void)writeTo:(id)arg1;

@end
