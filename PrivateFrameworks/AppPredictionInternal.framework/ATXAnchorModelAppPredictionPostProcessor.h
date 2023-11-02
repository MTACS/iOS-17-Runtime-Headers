
@interface ATXAnchorModelAppPredictionPostProcessor : NSObject {
    ATXAnchorModelPrediction * _anchorModelPrediction;
    ATXAppPredictionBlacklist * _blacklist;
    ATXAnchorModelDataStoreWrapper * _storeWrapper;
}

- (void).cxx_destruct;
- (id)initWithAnchorModelPrediction:(id)arg1;
- (id)initWithAnchorModelPrediction:(id)arg1 blacklist:(id)arg2;
- (bool)shouldPredictAnchorModelAppPrediction;

@end
