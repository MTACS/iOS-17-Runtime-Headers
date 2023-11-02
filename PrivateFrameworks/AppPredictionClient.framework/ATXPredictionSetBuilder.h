
@interface ATXPredictionSetBuilder : NSObject {
    NSMutableData * _data;
    bool  _finished;
    int  _predictionCount;
}

- (void).cxx_destruct;
- (id)finish;
- (id)init;
- (void)recordPrediction:(id)arg1 score:(float)arg2;

@end
