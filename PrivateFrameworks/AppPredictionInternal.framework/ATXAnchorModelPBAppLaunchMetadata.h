
@interface ATXAnchorModelPBAppLaunchMetadata : PBCodable <NSCopying> {
    long long  _app2VecCluster;
    bool  _appInstalledInLast48Hours;
    ATXAnchorModelPBLaunchHistoryMetadata * _appLaunchHistory;
    NSString * _bundleId;
    long long  _genreId;
    struct { 
        unsigned int app2VecCluster : 1; 
        unsigned int genreId : 1; 
        unsigned int relativeTimeSinceAnchorInSeconds : 1; 
        unsigned int appInstalledInLast48Hours : 1; 
    }  _has;
    int  _relativeTimeSinceAnchorInSeconds;
}

@property (nonatomic) long long app2VecCluster;
@property (nonatomic) bool appInstalledInLast48Hours;
@property (nonatomic, retain) ATXAnchorModelPBLaunchHistoryMetadata *appLaunchHistory;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) long long genreId;
@property (nonatomic) bool hasApp2VecCluster;
@property (nonatomic) bool hasAppInstalledInLast48Hours;
@property (nonatomic, readonly) bool hasAppLaunchHistory;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasGenreId;
@property (nonatomic) bool hasRelativeTimeSinceAnchorInSeconds;
@property (nonatomic) int relativeTimeSinceAnchorInSeconds;

- (void).cxx_destruct;
- (long long)app2VecCluster;
- (bool)appInstalledInLast48Hours;
- (id)appLaunchHistory;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)genreId;
- (bool)hasApp2VecCluster;
- (bool)hasAppInstalledInLast48Hours;
- (bool)hasAppLaunchHistory;
- (bool)hasBundleId;
- (bool)hasGenreId;
- (bool)hasRelativeTimeSinceAnchorInSeconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)relativeTimeSinceAnchorInSeconds;
- (void)setApp2VecCluster:(long long)arg1;
- (void)setAppInstalledInLast48Hours:(bool)arg1;
- (void)setAppLaunchHistory:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setGenreId:(long long)arg1;
- (void)setHasApp2VecCluster:(bool)arg1;
- (void)setHasAppInstalledInLast48Hours:(bool)arg1;
- (void)setHasGenreId:(bool)arg1;
- (void)setHasRelativeTimeSinceAnchorInSeconds:(bool)arg1;
- (void)setRelativeTimeSinceAnchorInSeconds:(int)arg1;
- (void)writeTo:(id)arg1;

@end
