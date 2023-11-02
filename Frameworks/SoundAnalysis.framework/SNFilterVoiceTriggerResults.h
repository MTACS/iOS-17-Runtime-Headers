
@interface SNFilterVoiceTriggerResults : NSObject {
    SNVoiceTriggerResult * _lastResult;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeBetweenTriggers;
}

- (void).cxx_destruct;

@end
