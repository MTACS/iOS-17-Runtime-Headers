
@interface SAStack : NSObject {
    NSMutableDictionary * _binaryImagesHitByTask;
    unsigned long long  _count;
    unsigned long long  _cpuCycles;
    unsigned long long  _cpuInstructions;
    unsigned long long  _cpuTimeNs;
    NSMutableArray * _dispatchQueues;
    unsigned long long  _firstSampleIndex;
    unsigned long long  _ioSize;
    bool  _isGlobalForcedIdleThread;
    bool  _isIdleWorkQueue;
    bool  _isMainThread;
    bool  _isProcessorIdleThread;
    bool  _isTargetThread;
    unsigned long long  _lastSampleIndex;
    int  _maxBasePriority;
    int  _maxPriority;
    int  _minBasePriority;
    int  _minPriority;
    unsigned long long  _numIOs;
    bool  _omit;
    NSMutableArray * _rootObjects;
    NSMutableArray * _swiftTasks;
    NSMutableArray * _threadIds;
    NSString * _threadName;
    bool  _threadNameChanges;
    SATimestamp * _timeWhenFirstAttemptedToSample;
}

- (void).cxx_destruct;

@end
