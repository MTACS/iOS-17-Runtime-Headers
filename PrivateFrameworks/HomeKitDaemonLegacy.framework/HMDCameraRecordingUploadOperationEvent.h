
@interface HMDCameraRecordingUploadOperationEvent : HMMLogEvent {
    NSUUID * _clipModelID;
    bool  _didCausePreviousClipToFinalizeDueToDurationLimit;
    unsigned long long  _operationType;
    unsigned long long  _retryCount;
    double  _runTime;
    unsigned long long  _startTimestamp;
    double  _totalClipDuration;
}

@property (readonly, copy) NSUUID *clipModelID;
@property bool didCausePreviousClipToFinalizeDueToDurationLimit;
@property unsigned long long operationType;
@property unsigned long long retryCount;
@property double runTime;
@property (readonly) unsigned long long runTimeInMilliseconds;
@property (readonly) unsigned long long startTimestamp;
@property double totalClipDuration;
@property (readonly) unsigned long long totalClipDurationMilliseconds;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)clipModelID;
- (bool)didCausePreviousClipToFinalizeDueToDurationLimit;
- (id)initWithClipModelID:(id)arg1 operation:(id)arg2;
- (unsigned long long)operationType;
- (unsigned long long)retryCount;
- (double)runTime;
- (unsigned long long)runTimeInMilliseconds;
- (void)setDidCausePreviousClipToFinalizeDueToDurationLimit:(bool)arg1;
- (void)setOperationType:(unsigned long long)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setRunTime:(double)arg1;
- (void)setTotalClipDuration:(double)arg1;
- (unsigned long long)startTimestamp;
- (double)totalClipDuration;
- (unsigned long long)totalClipDurationMilliseconds;

@end
