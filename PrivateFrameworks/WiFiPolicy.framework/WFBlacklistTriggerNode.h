
@interface WFBlacklistTriggerNode : NSObject {
    NSString * _bssid;
    unsigned long long  _triggerReason;
    long long  _triggerReasonData;
    NSString * _triggerReasonString;
    double  _triggerReasonTimestamp;
}

@property (copy) NSString *bssid;
@property unsigned long long triggerReason;
@property long long triggerReasonData;
@property (copy) NSString *triggerReasonString;
@property double triggerReasonTimestamp;

- (void).cxx_destruct;
- (id)bssid;
- (id)init;
- (void)setBssid:(id)arg1;
- (void)setTriggerReason:(unsigned long long)arg1;
- (void)setTriggerReasonData:(long long)arg1;
- (void)setTriggerReasonString:(id)arg1;
- (void)setTriggerReasonTimestamp:(double)arg1;
- (unsigned long long)triggerReason;
- (long long)triggerReasonData;
- (id)triggerReasonString;
- (double)triggerReasonTimestamp;

@end
