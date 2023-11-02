
@interface AKCAReporter : NSObject {
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _clock_timebase;
    NSString * _eventName;
    unsigned long long  _initTime;
    NSMutableDictionary * _reportData;
}

- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1;
- (double)machAbsoluteTimeToTimeInterval:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)sendReport;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
