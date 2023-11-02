
@interface MADConfidenceTracker : NSObject {
    double  _confidence;
    NSMutableArray * _history;
}

- (void).cxx_destruct;
- (id)init;
- (double)updateConfidence:(double)arg1;

@end
