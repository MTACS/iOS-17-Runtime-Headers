
@interface HMDAnalyticsEventTriggerUserConfirmationSendData : HMFObject {
    int  _resultErrorCode;
    NSString * _sessionID;
    unsigned long long  _timestamp;
}

@property int resultErrorCode;
@property (nonatomic, copy) NSString *sessionID;
@property unsigned long long timestamp;

- (void).cxx_destruct;
- (int)resultErrorCode;
- (id)sessionID;
- (void)setResultErrorCode:(int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
