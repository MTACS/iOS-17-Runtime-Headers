
@interface ITIdleTimerDescriptor : NSObject <BSDescriptionProviding, NSCopying> {
    unsigned long long  _attentionMaintenanceEventMask;
    unsigned long long  _attentionRecoveryEventMask;
    double  _attentionSamplingPeriod;
    double  _attentionSamplingStartDelay;
    NSArray * _timeouts;
}

@property (nonatomic, readonly) unsigned long long attentionMaintenanceEventMask;
@property (nonatomic, readonly) unsigned long long attentionRecoveryEventMask;
@property (nonatomic) double attentionSamplingPeriod;
@property (nonatomic) double attentionSamplingStartBeforeFirstTimeout;
@property (nonatomic) double attentionSamplingStartDelay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *timeouts;

- (void).cxx_destruct;
- (unsigned long long)attentionMaintenanceEventMask;
- (unsigned long long)attentionRecoveryEventMask;
- (double)attentionSamplingPeriod;
- (double)attentionSamplingStartBeforeFirstTimeout;
- (double)attentionSamplingStartDelay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)setAttentionEventMaintenanceMask:(unsigned long long)arg1 recoveryMask:(unsigned long long)arg2;
- (void)setAttentionEventMask:(unsigned long long)arg1;
- (void)setAttentionSamplingPeriod:(double)arg1;
- (void)setAttentionSamplingStartBeforeFirstTimeout:(double)arg1;
- (void)setAttentionSamplingStartDelay:(double)arg1;
- (void)setTimeouts:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)timeouts;

@end
