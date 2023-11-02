
@interface CDPCAReporter : NSObject {
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _clock_timebase;
    NSString * _eventName;
    unsigned long long  _initTime;
    NSMutableDictionary * _reportData;
}

- (void).cxx_destruct;
- (id)__eventNameForTesting;
- (void)_sendEvent;
- (id)debugDescription;
- (id)initWithEvent:(id)arg1;
- (double)machAbsoluteTimeToTimeInterval:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)populateUnderlyingErrorsStartingWithRootError:(id)arg1 maxDepth:(unsigned int)arg2;
- (void)populateUnderlyingErrorsStartingWithRootError:(id)arg1 maxDepth:(unsigned int)arg2 domainAllowlist:(id)arg3;
- (void)populateUnderlyingErrorsStartingWithRootError:(id)arg1 maxDepth:(unsigned int)arg2 topLevelErrorCodeKey:(id)arg3 topLevelErrorDomainKey:(id)arg4 errorCodePrefix:(id)arg5 errorDomainPrefix:(id)arg6 domainAllowlist:(id)arg7;
- (void)sendReport;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
