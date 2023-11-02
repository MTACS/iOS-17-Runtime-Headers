
@interface CAMAnalyticsProResPurgeEvent : CAMAnalyticsEvent {
    bool  __didUpdateForFirstPurgeOperation;
    CAMCaptureGraphConfiguration * __graphConfiguration;
    long long  __purgeOperationCount;
    double  __startTime;
    long long  __totalBytesPurged;
}

@property (setter=_setDidUpdateForFirstPurgeOperation:, nonatomic) bool _didUpdateForFirstPurgeOperation;
@property (nonatomic, readonly) CAMCaptureGraphConfiguration *_graphConfiguration;
@property (setter=_setPurgeOperationCount:, nonatomic) long long _purgeOperationCount;
@property (nonatomic, readonly) double _startTime;
@property (setter=_setTotalBytesPurged:, nonatomic) long long _totalBytesPurged;

- (void).cxx_destruct;
- (long long)_bucketedCount:(long long)arg1;
- (bool)_didUpdateForFirstPurgeOperation;
- (id)_graphConfiguration;
- (long long)_purgeOperationCount;
- (void)_setDidUpdateForFirstPurgeOperation:(bool)arg1;
- (void)_setPurgeOperationCount:(long long)arg1;
- (void)_setTotalBytesPurged:(long long)arg1;
- (double)_startTime;
- (long long)_totalBytesPurged;
- (void)_updateForIsBeforePurge:(bool)arg1 withFreeBytes:(long long)arg2 fastPurgeableBytes:(long long)arg3 slowPurgeableBytes:(long long)arg4 maxRecordingTimeSeconds:(double)arg5;
- (id)eventName;
- (id)initWithRequestType:(long long)arg1 graphConfiguration:(id)arg2 totalBytesInSystem:(long long)arg3;
- (void)publish;
- (void)updateAfterPurgeOperationWithFreeBytes:(long long)arg1 fastPurgeableBytes:(long long)arg2 slowPurgeableBytes:(long long)arg3 maxRecordingTimeSeconds:(double)arg4 bytesPurged:(long long)arg5;
- (void)updateBeforePurgeOperationWithFreeBytes:(long long)arg1 fastPurgeableBytes:(long long)arg2 slowPurgeableBytes:(long long)arg3 maxRecordingTimeSeconds:(double)arg4;
- (void)updateForCancelRequest;
- (void)updateForSkippedPurgeOperationWithFreeBytes:(long long)arg1 fastPurgeableBytes:(long long)arg2 slowPurgeableBytes:(long long)arg3 maxRecordingTimeSeconds:(double)arg4;

@end
