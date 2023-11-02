
@interface SNAudioRecordingQueueScheduler : NSObject {
    id /* block */  _bufferHandler;
    NSObject<OS_dispatch_queue> * _eventHandlerQueue;
    _Atomic long long  _eventHandlerQueueFundsEarned;
    _Atomic long long  _eventHandlerQueueFundsSpent;
    _Atomic bool  _eventHandlerQueueStopped;
    id /* block */  _interruptionHandler;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastAudioHeartbeatTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastProcessingHeartbeatTime;
    AVAudioFormat * _recordFormat;
    NSObject<OS_os_transaction> * _transaction;
    int  _unhealthyBufferCount;
}

- (void).cxx_destruct;
- (id)init;

@end
