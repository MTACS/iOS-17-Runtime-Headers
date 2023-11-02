
@interface CLSIconicScoreModel : NSObject <CLSSignalModel> {
    double  _highIconicScore;
    double  _lowestPossibleIconicScore;
    double  _mediumIconicScore;
    double  _minimumMeaningfulIconicScore;
    double  _similarIconicScoreThreshold;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double highIconicScore;
@property (readonly) double lowestPossibleIconicScore;
@property (readonly) double mediumIconicScore;
@property (readonly) double minimumMeaningfulIconicScore;
@property (readonly) double similarIconicScoreThreshold;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (unsigned long long)bucketForIconicScore:(double)arg1;
- (double)highIconicScore;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (double)lowestPossibleIconicScore;
- (double)mediumIconicScore;
- (double)minimumMeaningfulIconicScore;
- (void)setupVersion100;
- (void)setupVersion96;
- (double)similarIconicScoreThreshold;
- (unsigned long long)version;

@end
