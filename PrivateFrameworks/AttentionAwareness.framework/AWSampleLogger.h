
@interface AWSampleLogger : NSObject {
    NSMutableSet * _addedClientLogData;
    NSMutableDictionary * _clientLogData;
    unsigned long long  _cumulativeSamplingTime;
    NSMutableSet * _outstandingClientLogData;
    unsigned long long  _pollsRequested;
    NSObject<OS_dispatch_queue> * _powerLogQueue;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _samplesRequested;
    unsigned long long  _samplesSucceeded;
    unsigned long long  _samplingStartTime;
    NSObject<OS_dispatch_source> * _timer;
}

+ (void)client:(id)arg1 attentionStateChange:(bool)arg2;
+ (void)client:(id)arg1 event:(id)arg2;
+ (void)client:(id)arg1 pollEventType:(unsigned long long)arg2 event:(id)arg3;
+ (id)sharedLogger;

- (void).cxx_destruct;
- (void)_logFeatureEnablement;
- (void)_outputPowerLog;
- (id)init;
- (void)outputPowerLog;
- (void)powerLogName:(id)arg1 event:(id)arg2;
- (void)sampleStartedWithDeadline:(unsigned long long)arg1;
- (void)sampleSucceeded;
- (void)shouldSample:(bool)arg1;
- (void)startUpdate;
- (void)streamingCompleteWithidentifier:(id)arg1 duration:(unsigned long long)arg2 ERActivated:(bool)arg3;
- (void)updateDataForClient:(id)arg1 deadline:(unsigned long long)arg2;

@end
