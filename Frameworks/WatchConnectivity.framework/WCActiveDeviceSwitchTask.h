
@interface WCActiveDeviceSwitchTask : NSObject {
    bool  _clientReadyForSessionState;
    unsigned long long  _taskState;
}

@property bool clientReadyForSessionState;
@property unsigned long long taskState;

+ (id)taskStateToString:(unsigned long long)arg1;

- (bool)clientReadyForSessionState;
- (id)description;
- (void)setClientReadyForSessionState:(bool)arg1;
- (void)setTaskState:(unsigned long long)arg1;
- (unsigned long long)taskState;

@end
