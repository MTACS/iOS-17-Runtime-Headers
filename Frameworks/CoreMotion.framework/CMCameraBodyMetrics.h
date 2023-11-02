
@interface CMCameraBodyMetrics : NSObject {
    int  _age;
    bool  _betaBlockerUse;
    int  _biologicalSex;
    double  _globalMachtime;
    double  _heightMeters;
    double  _localMachtime;
    double  _vo2max;
    double  _weightKG;
}

@property (nonatomic) int age;
@property (nonatomic) bool betaBlockerUse;
@property (nonatomic) int biologicalSex;
@property (nonatomic) double globalMachtime;
@property (nonatomic) double heightMeters;
@property (nonatomic) double localMachtime;
@property (nonatomic) double vo2max;
@property (nonatomic) double weightKG;

- (int)age;
- (bool)betaBlockerUse;
- (int)biologicalSex;
- (double)globalMachtime;
- (double)heightMeters;
- (double)localMachtime;
- (void)setAge:(int)arg1;
- (void)setBetaBlockerUse:(bool)arg1;
- (void)setBiologicalSex:(int)arg1;
- (void)setGlobalMachtime:(double)arg1;
- (void)setHeightMeters:(double)arg1;
- (void)setLocalMachtime:(double)arg1;
- (void)setVo2max:(double)arg1;
- (void)setWeightKG:(double)arg1;
- (double)vo2max;
- (double)weightKG;

@end
