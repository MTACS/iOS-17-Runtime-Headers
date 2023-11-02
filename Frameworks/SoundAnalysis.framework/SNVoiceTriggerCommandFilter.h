
@interface SNVoiceTriggerCommandFilter : NSObject {
    double  _confidenceThreshold;
    NSMutableArray * _history;
    long long  _maxHistoryLength;
    NSString * _name;
    int  _streak;
}

- (void).cxx_destruct;

@end
