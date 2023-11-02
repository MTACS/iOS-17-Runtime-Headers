
@interface PGHolidayClassifier : NSObject {
    double  _celebrationThreshold;
    double  _dateWeight;
    double  _edgeCaseSceneWeight;
    double  _imperativeSceneWeight;
    double  _importantSceneWeight;
    double  _localeLocationWeight;
    double  _locationWeight;
    double  _mediumSceneWeight;
    double  _momentLocationWeight;
    double  _sceneWeight;
}

@property (nonatomic, readonly) double celebrationThreshold;
@property (nonatomic, readonly) double dateWeight;
@property (nonatomic, readonly) double edgeCaseSceneWeight;
@property (nonatomic, readonly) double imperativeSceneWeight;
@property (nonatomic, readonly) double importantSceneWeight;
@property (nonatomic, readonly) double localeLocationWeight;
@property (nonatomic, readonly) double locationWeight;
@property (nonatomic, readonly) double mediumSceneWeight;
@property (nonatomic, readonly) double momentLocationWeight;
@property (nonatomic, readonly) double sceneWeight;

- (double)celebrationThreshold;
- (double)dateWeight;
- (id)description;
- (double)edgeCaseSceneWeight;
- (double)imperativeSceneWeight;
- (double)importantSceneWeight;
- (id)init;
- (bool)isCelebratingForDateScore:(double)arg1 sceneScore:(double)arg2 locationScore:(double)arg3;
- (double)localeLocationWeight;
- (double)locationWeight;
- (double)mediumSceneWeight;
- (double)momentLocationWeight;
- (double)sceneWeight;
- (double)scoreForHolidayDetectedScenes:(id)arg1;

@end
