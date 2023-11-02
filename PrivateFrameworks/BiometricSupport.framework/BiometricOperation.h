
@interface BiometricOperation : NSObject {
    unsigned int  _cancelledMessage;
    BiometricKitXPCExportedClientObject * _client;
    long long  _priority;
    int  _status;
}

@property (nonatomic, readonly) unsigned int cancelledMessage;
@property (nonatomic, retain) BiometricKitXPCExportedClientObject *client;
@property (nonatomic) long long priority;
@property (nonatomic) int status;
@property (nonatomic, readonly) unsigned int taskPausedMessage;
@property (nonatomic, readonly) unsigned int taskResumeFailedMessage;
@property (nonatomic, readonly) unsigned int taskResumedMessage;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (unsigned int)cancelledMessage;
- (id)client;
- (id)description;
- (id)init;
- (long long)priority;
- (void)setClient:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (unsigned int)taskPausedMessage;
- (unsigned int)taskResumeFailedMessage;
- (unsigned int)taskResumedMessage;
- (int)type;

@end
