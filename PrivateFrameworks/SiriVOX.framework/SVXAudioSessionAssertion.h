
@interface SVXAudioSessionAssertion : NSObject {
    unsigned int  _audioSessionID;
    NSString * _reason;
    AFSafetyBlock * _relinquishHandler;
    <SVXTaskTracking> * _taskTracker;
}

@property (nonatomic, readonly) unsigned int audioSessionID;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly) <SVXTaskTracking> *taskTracker;

- (void).cxx_destruct;
- (unsigned int)audioSessionID;
- (void)dealloc;
- (id)description;
- (id)initWithReason:(id)arg1 audioSessionID:(unsigned int)arg2 taskTracker:(id)arg3 relinquishHandler:(id /* block */)arg4;
- (id)reason;
- (void)relinquish;
- (id)taskTracker;

@end
