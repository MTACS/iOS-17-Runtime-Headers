
@interface OSAStackShotReport : OSAReport <OSAConcreteReport> {
    NSDictionary * _additionalPayload;
    NSString * _appName;
    unsigned long long  _capture_absoluteTime;
    bool  _dead_snapshot;
    unsigned int  _exceptionCodeCount;
    long long * _exceptionCodes;
    NSMutableDictionary * _extras;
    unsigned int  _flags;
    NSMutableArray * _frontmostPids;
    bool  _includeSyslog;
    int  _jetsamLevel;
    int  _pid;
    NSString * _reason;
    unsigned int  _ss_sequence;
    const void * _ss_trace_buffer;
    unsigned int  _ss_trace_length;
    void * _stackshot_config;
    int  _thermalNotificationCurrentLevel;
    NSArray * _thermalSensorValues;
}

@property (nonatomic, readonly) unsigned long long capture_absoluteTime;
@property (nonatomic) bool dead_snapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) NSArray *frontmostPids;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeSyslog;
@property (nonatomic) int jetsamLevel;
@property (nonatomic) unsigned int ss_sequence;
@property (nonatomic, readonly) const void*ss_trace_buffer;
@property (nonatomic, readonly) unsigned int ss_trace_length;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acquireStackshot;
- (void)addCustomField:(const char *)arg1 value:(id)arg2 into:(id)arg3;
- (void)addNotes:(id)arg1;
- (id)appleCareDetails;
- (unsigned long long)capture_absoluteTime;
- (bool)dead_snapshot;
- (void)dealloc;
- (void)decodeKCDataWithBlock:(id /* block */)arg1 withTuning:(id)arg2 usingCatalog:(id)arg3;
- (id)exceptionCodesDescription;
- (unsigned int)flags;
- (id)frontmostPids;
- (void)generateLogAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)getExtraData:(id)arg1;
- (id)getStackshotData;
- (id)getVMStatistics;
- (bool)includeSyslog;
- (id)initForPid:(int)arg1 process:(id)arg2 withReason:(id)arg3 exceptionCode:(long long*)arg4 exceptionCodeCount:(unsigned int)arg5 stackshotFlags:(unsigned int)arg6;
- (id)initWithName:(id)arg1 reason:(id)arg2 exceptionCode:(long long*)arg3 exceptionCodeCount:(unsigned int)arg4;
- (bool)isActionable;
- (int)jetsamLevel;
- (id)problemType;
- (void)queryThermalData;
- (id)reportNamePrefix;
- (int)resampleTruncatedBacktracesForTask:(int)arg1 forThreads:(id)arg2 usingCatalog:(id)arg3 in:(id)arg4;
- (id)resampleUUIDsForTask:(int)arg1 usingCatalog:(id)arg2;
- (void)setAdditionalPayload:(id)arg1;
- (void)setDead_snapshot:(bool)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setIncidentID:(id)arg1;
- (void)setIncludeSyslog:(bool)arg1;
- (void)setJetsamLevel:(int)arg1;
- (void)setReason:(id)arg1;
- (void)setSs_sequence:(unsigned int)arg1;
- (unsigned int)ss_sequence;
- (const void*)ss_trace_buffer;
- (unsigned int)ss_trace_length;
- (void)useStackshotBuffer:(const void*)arg1 size:(unsigned int)arg2 frontmostPids:(id)arg3 atTime:(double)arg4 machTime:(unsigned long long)arg5 sequence:(unsigned int)arg6;
- (void)useStackshotData:(id)arg1 frontmostPids:(id)arg2 atTime:(double)arg3 machTime:(unsigned long long)arg4 sequence:(unsigned int)arg5;

@end
