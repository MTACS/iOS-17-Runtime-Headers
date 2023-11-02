
@interface _ATXAppInfo : NSObject <NSCopying> {
    NSNumber * _app2VecCluster;
    NSNumber * _averageSecondsBetweenLaunches;
    NSString * _bundleId;
    NSNumber * _genreId;
    NSDate * _installDate;
    bool  _isEnterpriseApp;
    bool  _isExtension;
    NSDate * _lastLaunch;
    NSDate * _lastSpotlightLaunch;
    NSNumber * _medianSecondsBetweenLaunches;
    NSArray * _subGenreIds;
}

@property (nonatomic, copy) NSNumber *app2VecCluster;
@property (nonatomic, copy) NSNumber *averageSecondsBetweenLaunches;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSNumber *genreId;
@property (nonatomic, copy) NSDate *installDate;
@property (nonatomic) bool isEnterpriseApp;
@property (nonatomic) bool isExtension;
@property (nonatomic, copy) NSDate *lastLaunch;
@property (nonatomic, copy) NSDate *lastSpotlightLaunch;
@property (nonatomic, copy) NSNumber *medianSecondsBetweenLaunches;
@property (nonatomic, copy) NSArray *subGenreIds;

- (void).cxx_destruct;
- (id)app2VecCluster;
- (id)averageSecondsBetweenLaunches;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)genreId;
- (id)init;
- (id)initWithBundleId:(id)arg1 isExtension:(bool)arg2 isEnterpriseApp:(bool)arg3 installDate:(id)arg4 lastLaunch:(id)arg5 lastSpotlightLaunch:(id)arg6 averageSecondsBetweenLaunches:(id)arg7 medianSecondsBetweenLaunches:(id)arg8 genreId:(id)arg9 subGenreIds:(id)arg10 app2VecCluster:(id)arg11;
- (id)installDate;
- (bool)isEnterpriseApp;
- (bool)isExtension;
- (id)lastLaunch;
- (id)lastSpotlightLaunch;
- (id)medianSecondsBetweenLaunches;
- (void)setApp2VecCluster:(id)arg1;
- (void)setAverageSecondsBetweenLaunches:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setGenreId:(id)arg1;
- (void)setInstallDate:(id)arg1;
- (void)setIsEnterpriseApp:(bool)arg1;
- (void)setIsExtension:(bool)arg1;
- (void)setLastLaunch:(id)arg1;
- (void)setLastSpotlightLaunch:(id)arg1;
- (void)setMedianSecondsBetweenLaunches:(id)arg1;
- (void)setSubGenreIds:(id)arg1;
- (id)subGenreIds;

@end
