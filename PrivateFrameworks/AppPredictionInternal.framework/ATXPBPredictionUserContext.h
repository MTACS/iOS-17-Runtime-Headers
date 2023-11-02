
@interface ATXPBPredictionUserContext : PBCodable <NSCopying> {
    struct { 
        unsigned int lastAppLaunchDate : 1; 
        unsigned int lastUnlockDate : 1; 
    }  _has;
    NSString * _lastAppActionLaunch;
    NSString * _lastAppLaunch;
    double  _lastAppLaunchDate;
    double  _lastUnlockDate;
    NSString * _secondMostRecentAppLaunch;
}

@property (nonatomic, readonly) bool hasLastAppActionLaunch;
@property (nonatomic, readonly) bool hasLastAppLaunch;
@property (nonatomic) bool hasLastAppLaunchDate;
@property (nonatomic) bool hasLastUnlockDate;
@property (nonatomic, readonly) bool hasSecondMostRecentAppLaunch;
@property (nonatomic, retain) NSString *lastAppActionLaunch;
@property (nonatomic, retain) NSString *lastAppLaunch;
@property (nonatomic) double lastAppLaunchDate;
@property (nonatomic) double lastUnlockDate;
@property (nonatomic, retain) NSString *secondMostRecentAppLaunch;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastAppActionLaunch;
- (bool)hasLastAppLaunch;
- (bool)hasLastAppLaunchDate;
- (bool)hasLastUnlockDate;
- (bool)hasSecondMostRecentAppLaunch;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastAppActionLaunch;
- (id)lastAppLaunch;
- (double)lastAppLaunchDate;
- (double)lastUnlockDate;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)secondMostRecentAppLaunch;
- (void)setHasLastAppLaunchDate:(bool)arg1;
- (void)setHasLastUnlockDate:(bool)arg1;
- (void)setLastAppActionLaunch:(id)arg1;
- (void)setLastAppLaunch:(id)arg1;
- (void)setLastAppLaunchDate:(double)arg1;
- (void)setLastUnlockDate:(double)arg1;
- (void)setSecondMostRecentAppLaunch:(id)arg1;
- (void)writeTo:(id)arg1;

@end
