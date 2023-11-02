
@interface HMDAccessoryFirmwareUpdateConcurrencyLogEvent : HMMLogEvent {
    unsigned long long  _peakConcurrentBLEAccessoryUpdateApply;
    unsigned long long  _peakConcurrentBLEAccessoryUpdateStaging;
    unsigned long long  _peakConcurrentIPAccessoryUpdateApply;
    unsigned long long  _peakConcurrentIPAccessoryUpdateStaging;
    unsigned long long  _peakConcurrentThreadAccessoryUpdateApply;
    unsigned long long  _peakConcurrentThreadAccessoryUpdateStaging;
}

@property (nonatomic, readonly) unsigned long long peakConcurrentBLEAccessoryUpdateApply;
@property (nonatomic, readonly) unsigned long long peakConcurrentBLEAccessoryUpdateStaging;
@property (nonatomic, readonly) unsigned long long peakConcurrentIPAccessoryUpdateApply;
@property (nonatomic, readonly) unsigned long long peakConcurrentIPAccessoryUpdateStaging;
@property (nonatomic, readonly) unsigned long long peakConcurrentThreadAccessoryUpdateApply;
@property (nonatomic, readonly) unsigned long long peakConcurrentThreadAccessoryUpdateStaging;

- (id)initWithPeakConcurrentIPAccessoryUpdateStaging:(unsigned long long)arg1 peakConcurrentIPAccessoryUpdateApply:(unsigned long long)arg2 peakConcurrentBLEAccessoryUpdateStaging:(unsigned long long)arg3 peakConcurrentBLEAccessoryUpdateApply:(unsigned long long)arg4 peakConcurrentThreadAccessoryUpdateStaging:(unsigned long long)arg5 peakConcurrentThreadAccessoryUpdateApply:(unsigned long long)arg6;
- (unsigned long long)peakConcurrentBLEAccessoryUpdateApply;
- (unsigned long long)peakConcurrentBLEAccessoryUpdateStaging;
- (unsigned long long)peakConcurrentIPAccessoryUpdateApply;
- (unsigned long long)peakConcurrentIPAccessoryUpdateStaging;
- (unsigned long long)peakConcurrentThreadAccessoryUpdateApply;
- (unsigned long long)peakConcurrentThreadAccessoryUpdateStaging;

@end
