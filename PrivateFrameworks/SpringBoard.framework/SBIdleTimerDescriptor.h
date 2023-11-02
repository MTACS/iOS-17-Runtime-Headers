
@interface SBIdleTimerDescriptor : NSObject <BSDescriptionProviding, BSDescriptionStreamable, NSCopying> {
    NSMutableArray * _auditEntries;
    NSArray * _finalAuditChangeEntry;
    double  _quickUnwarnInterval;
    double  _sampleInterval;
    long long  _timerMode;
    double  _totalInterval;
    double  _warnInterval;
}

@property (nonatomic, retain) NSMutableArray *auditEntries;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *finalAuditChangeEntry;
@property (readonly) unsigned long long hash;
@property (nonatomic) double quickUnwarnInterval;
@property (nonatomic) double sampleInterval;
@property (nonatomic, readonly) bool shouldExpireAfterWarn;
@property (nonatomic, readonly) bool shouldWarn;
@property (readonly) Class superclass;
@property (nonatomic) long long timerMode;
@property (nonatomic) double totalInterval;
@property (nonatomic) double warnInterval;

- (void).cxx_destruct;
- (void)addAuditReason:(id)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)auditEntries;
- (id)auditReasonsForStateCapture;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)finalAuditChangeEntry;
- (unsigned long long)hash;
- (id)initWithTimerMode:(long long)arg1 warnInterval:(double)arg2 totalInterval:(double)arg3;
- (bool)isEqual:(id)arg1;
- (void)logAuditReasons:(id)arg1;
- (double)quickUnwarnInterval;
- (double)sampleInterval;
- (void)setAuditEntries:(id)arg1;
- (void)setFinalAuditChangeEntry:(id)arg1;
- (void)setQuickUnwarnInterval:(double)arg1;
- (void)setSampleInterval:(double)arg1;
- (void)setTimerMode:(long long)arg1;
- (void)setTotalInterval:(double)arg1;
- (void)setWarnInterval:(double)arg1;
- (bool)shouldExpireAfterWarn;
- (bool)shouldWarn;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)timerMode;
- (double)totalInterval;
- (double)warnInterval;

@end
