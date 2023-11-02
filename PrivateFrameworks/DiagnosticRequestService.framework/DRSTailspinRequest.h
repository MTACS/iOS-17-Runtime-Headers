
@interface DRSTailspinRequest : DRSRequest {
    bool  _includeOsLog;
    bool  _includeOsSignpost;
    NSNumber * _minMAT;
    bool  _scrubbed;
}

@property (nonatomic, readonly) bool includeOsLog;
@property (nonatomic, readonly) bool includeOsSignpost;
@property (nonatomic, readonly) NSNumber *minMAT;
@property (nonatomic, readonly) bool scrubbed;

+ (Class)_moClass;
+ (bool)_shouldScrub;
+ (bool)enforceMinTraceBufferDuration;
+ (id)entityName;
+ (id)requiredSystemResourceName;
+ (void)resetEnforceMinTraceBufferDuration;
+ (void)setEnforceMinTraceBufferDuration:(bool)arg1;

- (void).cxx_destruct;
- (void)_configureRequestMO:(id)arg1;
- (bool)_dumpTailspinToDirectory:(id)arg1;
- (id)_initWithTailspinRequestMO_ON_MOC_QUEUE:(id)arg1;
- (bool)_performPostClientLogWork:(id)arg1 dampeningOutcome:(unsigned long long)arg2 isLogUploadEnabled:(bool)arg3;
- (id)_tailspinOptions;
- (id)debugDescription;
- (unsigned long long)expectedType;
- (bool)includeOsLog;
- (bool)includeOsSignpost;
- (id)initWithXPCDict:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (id)logType;
- (id)minMAT;
- (id)requestType;
- (bool)scrubbed;

@end
