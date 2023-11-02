
@interface HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData : HMFObject {
    int  _resultErrorCode;
    NSString * _sessionID;
    unsigned long long  _timestamp;
    unsigned long long  _userResponseDelay;
}

@property int resultErrorCode;
@property (nonatomic, copy) NSString *sessionID;
@property unsigned long long timestamp;
@property unsigned long long userResponseDelay;

- (void).cxx_destruct;
- (int)resultErrorCode;
- (id)sessionID;
- (void)setResultErrorCode:(int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserResponseDelay:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned long long)userResponseDelay;

@end
