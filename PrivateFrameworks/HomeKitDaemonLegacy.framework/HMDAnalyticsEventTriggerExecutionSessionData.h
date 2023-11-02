
@interface HMDAnalyticsEventTriggerExecutionSessionData : HMFObject {
    NSArray * _endEvents;
    int  _executionState;
    int  _resultErrorCode;
    NSString * _sessionID;
    unsigned long long  _timestamp;
    NSArray * _triggerEvents;
}

@property (nonatomic, copy) NSArray *endEvents;
@property int executionState;
@property int resultErrorCode;
@property (nonatomic, copy) NSString *sessionID;
@property unsigned long long timestamp;
@property (nonatomic, copy) NSArray *triggerEvents;

- (void).cxx_destruct;
- (id)endEvents;
- (int)executionState;
- (int)resultErrorCode;
- (id)sessionID;
- (void)setEndEvents:(id)arg1;
- (void)setExecutionState:(int)arg1;
- (void)setResultErrorCode:(int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvents:(id)arg1;
- (unsigned long long)timestamp;
- (id)triggerEvents;

@end
