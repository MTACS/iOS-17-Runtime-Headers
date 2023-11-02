
@interface ATXTimelineRelevancePBFeatureVector : PBCodable <NSCopying> {
    long long  _appLaunchCount;
    long long  _appLaunchPopularity;
    struct { 
        unsigned int appLaunchCount : 1; 
        unsigned int appLaunchPopularity : 1; 
    }  _has;
}

@property (nonatomic) long long appLaunchCount;
@property (nonatomic) long long appLaunchPopularity;
@property (nonatomic) bool hasAppLaunchCount;
@property (nonatomic) bool hasAppLaunchPopularity;

- (long long)appLaunchCount;
- (long long)appLaunchPopularity;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppLaunchCount;
- (bool)hasAppLaunchPopularity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppLaunchCount:(long long)arg1;
- (void)setAppLaunchPopularity:(long long)arg1;
- (void)setHasAppLaunchCount:(bool)arg1;
- (void)setHasAppLaunchPopularity:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
