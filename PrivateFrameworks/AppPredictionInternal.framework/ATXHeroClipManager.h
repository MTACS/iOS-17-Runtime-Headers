
@interface ATXHeroClipManager : NSObject {
    ATXAppClipsFeedback * _feedback;
    <ATXPETEventTracker2Protocol> * _tracker;
}

@property (nonatomic, readonly) ATXAppClipsFeedback *feedback;

+ (id)addPredictionLocationToHeroAppPredictions:(id)arg1 location:(id)arg2;
+ (bool)clipsSupported;
+ (void)openAppClipWithHeroAppPrediction:(id)arg1 completion:(id /* block */)arg2;
+ (id)sortPredictionsOnFeedback:(id)arg1;

- (void).cxx_destruct;
- (id)_populateMetadataInHeroAppPrediction:(id)arg1;
- (void)donateAppClipsWithHeroAppPredictions:(id)arg1;
- (id)feedback;
- (id)init;
- (id)initWithFeedback:(id)arg1;
- (id)initWithFeedback:(id)arg1 tracker:(id)arg2;
- (void)logSuppressionMetricWithHeroAppPrediction:(id)arg1 suppresionType:(int)arg2;

@end
