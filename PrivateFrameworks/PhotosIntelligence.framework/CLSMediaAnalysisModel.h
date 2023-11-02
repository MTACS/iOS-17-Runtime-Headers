
@interface CLSMediaAnalysisModel : NSObject <CLSSignalModel> {
    double  _autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;
    double  _autoplaySuggestionScoreThresholdToBeInteresting;
    CLSSignalNode * _settlingEffectScoreNode;
    unsigned long long  _version;
    double  _videoScoreThresholdToBeInteresting;
    double  _videoScoreThresholdToNotBeJunk;
}

@property (readonly) double autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;
@property (readonly) double autoplaySuggestionScoreThresholdToBeInteresting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) CLSSignalNode *settlingEffectScoreNode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;
@property (readonly) double videoScoreThresholdToBeInteresting;
@property (readonly) double videoScoreThresholdToNotBeJunk;

+ (unsigned long long)baseMediaAnalysisVersionWithMediaAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (double)autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;
- (double)autoplaySuggestionScoreThresholdToBeInteresting;
- (id)initForTesting;
- (id)initWithMediaAnalysisVersion:(unsigned long long)arg1;
- (id)settlingEffectScoreNode;
- (void)setupVersion33;
- (void)setupVersion59;
- (void)setupVersion61;
- (unsigned long long)version;
- (double)videoScoreThresholdToBeInteresting;
- (double)videoScoreThresholdToNotBeJunk;

@end
