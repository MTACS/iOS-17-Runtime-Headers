
@interface ATXFeedbackStateBuilder : NSObject {
    NSMutableData * _data;
    bool  _finished;
    int  _predictionCount;
}

- (void).cxx_destruct;
- (id)finish;
- (id)init;
- (id)initWithABGroup:(id)arg1 assetVersion:(long long)arg2;
- (void)recordPrediction:(id)arg1 actionHash:(unsigned long long)arg2 totalScore:(float)arg3 scoreInputs:(const float*)arg4 isMediumConfidenceForBlendingLayer:(bool)arg5 isHighConfidenceForBlendingLayer:(bool)arg6;

@end
