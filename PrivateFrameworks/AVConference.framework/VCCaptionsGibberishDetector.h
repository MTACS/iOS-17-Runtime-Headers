
@interface VCCaptionsGibberishDetector : NSObject {
    NSMutableDictionary * _gibberishStates;
    double  _gibberishThreshold;
    NSMutableDictionary * _history;
    unsigned long long  _windowLength;
}

- (void)dealloc;
- (bool)gibberishStateForCaptionsToken:(long long)arg1;
- (id)initWithGibberishThreshold:(double)arg1 windowLength:(unsigned long long)arg2;
- (bool)processTranscript:(id)arg1;
- (void)reset;

@end
