
@interface MXMOSSignpostProbe : MXMProbe {
    MXMMutableSampleData * _data;
    NSDate * _endDate;
    SignpostSupportObjectExtractor * _extractor;
    NSObject<OS_dispatch_semaphore> * _finishedProcessingSema;
    NSURL * _logArchivePath;
    unsigned long long  _mode;
    NSDate * _startDate;
    unsigned long long  _startMachContTime;
    unsigned long long  _stopMachContTime;
}

+ (id)probeHostLive;
+ (id)probeHostSystemLogArchiveWithRelativeTimeInterval:(double)arg1;
+ (id)probeHostSystemLogArchiveWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)probeHostSystemLogArchiveWithStartDate:(id)arg1 endDate:(id)arg2 startMachTime:(unsigned long long)arg3 stopMachTime:(unsigned long long)arg4;
+ (id)probeWithLogArchivePath:(id)arg1;
+ (id)probeWithLogArchivePath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)probeWithLogArchivePath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 startMachTime:(unsigned long long)arg4 stopMachTime:(unsigned long long)arg5;

- (void).cxx_destruct;
- (void)_addAnimationFrameCountToData:(id)arg1 fromSignpostAnimationInterval:(id)arg2;
- (void)_addAnimationFrameRateToData:(id)arg1 fromSignpostAnimationInterval:(id)arg2;
- (void)_addAnimationGlitchTimeRatioToData:(id)arg1 fromSignpostAnimationInterval:(id)arg2;
- (void)_addAnimationGlitchesTotalDurationToData:(id)arg1 fromSignpostAnimationInterval:(id)arg2;
- (void)_addAnimationNumberOfGlitchesToData:(id)arg1 fromSignpostAnimationInterval:(id)arg2;
- (void)_beginUpdates;
- (void)_buildData:(id)arg1 attributes:(id)arg2 signpostEvent:(id)arg3;
- (void)_buildData:(id)arg1 signpostAnimationInterval:(id)arg2;
- (void)_buildData:(id)arg1 signpostInterval:(id)arg2;
- (id)_buildSampleSetWithData:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 signpostObject:(id)arg5;
- (void)_setupProcessingBlocks;
- (void)_setupProcessingFilter;
- (void)_stopUpdates;
- (void)dealloc;
- (id)initWithLogArchive:(id)arg1;
- (id)initWithLogArchive:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithMode:(unsigned long long)arg1;
- (id)initWithMode:(unsigned long long)arg1 logArchive:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)initWithMode:(unsigned long long)arg1 logArchive:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 startMachTime:(unsigned long long)arg5 stopMachTime:(unsigned long long)arg6;
- (id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long*)arg2;

@end
