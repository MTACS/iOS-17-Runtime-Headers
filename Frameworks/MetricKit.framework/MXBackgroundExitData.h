
@interface MXBackgroundExitData : NSObject <NSSecureCoding> {
    unsigned long long  _cumulativeAbnormalExitCount;
    unsigned long long  _cumulativeAppWatchdogExitCount;
    unsigned long long  _cumulativeBackgroundFetchCompletionTimeoutExitCount;
    unsigned long long  _cumulativeBackgroundTaskAssertionTimeoutExitCount;
    unsigned long long  _cumulativeBackgroundURLSessionCompletionTimeoutExitCount;
    unsigned long long  _cumulativeBadAccessExitCount;
    unsigned long long  _cumulativeCPUResourceLimitExitCount;
    unsigned long long  _cumulativeIllegalInstructionExitCount;
    unsigned long long  _cumulativeMemoryPressureExitCount;
    unsigned long long  _cumulativeMemoryResourceLimitExitCount;
    unsigned long long  _cumulativeNormalAppExitCount;
    unsigned long long  _cumulativeSuspendedWithLockedFileExitCount;
}

@property (readonly) unsigned long long cumulativeAbnormalExitCount;
@property (readonly) unsigned long long cumulativeAppWatchdogExitCount;
@property (readonly) unsigned long long cumulativeBackgroundFetchCompletionTimeoutExitCount;
@property (readonly) unsigned long long cumulativeBackgroundTaskAssertionTimeoutExitCount;
@property (readonly) unsigned long long cumulativeBackgroundURLSessionCompletionTimeoutExitCount;
@property (readonly) unsigned long long cumulativeBadAccessExitCount;
@property (readonly) unsigned long long cumulativeCPUResourceLimitExitCount;
@property (readonly) unsigned long long cumulativeIllegalInstructionExitCount;
@property (readonly) unsigned long long cumulativeMemoryPressureExitCount;
@property (readonly) unsigned long long cumulativeMemoryResourceLimitExitCount;
@property (readonly) unsigned long long cumulativeNormalAppExitCount;
@property (readonly) unsigned long long cumulativeSuspendedWithLockedFileExitCount;

+ (bool)supportsSecureCoding;

- (unsigned long long)cumulativeAbnormalExitCount;
- (unsigned long long)cumulativeAppWatchdogExitCount;
- (unsigned long long)cumulativeBackgroundFetchCompletionTimeoutExitCount;
- (unsigned long long)cumulativeBackgroundTaskAssertionTimeoutExitCount;
- (unsigned long long)cumulativeBackgroundURLSessionCompletionTimeoutExitCount;
- (unsigned long long)cumulativeBadAccessExitCount;
- (unsigned long long)cumulativeCPUResourceLimitExitCount;
- (unsigned long long)cumulativeIllegalInstructionExitCount;
- (unsigned long long)cumulativeMemoryPressureExitCount;
- (unsigned long long)cumulativeMemoryResourceLimitExitCount;
- (unsigned long long)cumulativeNormalAppExitCount;
- (unsigned long long)cumulativeSuspendedWithLockedFileExitCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNormalAppExitCount:(id)arg1 memoryResourceLimitExitCount:(id)arg2 cpuResourceLimitExitCount:(id)arg3 badAccessExitCount:(id)arg4 abnormalExitCount:(id)arg5 illegalInstructionExitCount:(id)arg6 appWatchDogExitCount:(id)arg7 cumulativeSuspendedWithLockedFileExitCount:(id)arg8 cumulativeBackgroundTaskAssertionTimeoutExitCount:(id)arg9;
- (id)initWithNormalAppExitCount:(id)arg1 memoryResourceLimitExitCount:(id)arg2 cpuResourceLimitExitCount:(id)arg3 memoryPressureExitCount:(id)arg4 badAccessExitCount:(id)arg5 abnormalExitCount:(id)arg6 illegalInstructionExitCount:(id)arg7 appWatchDogExitCount:(id)arg8 cumulativeSuspendedWithLockedFileExitCount:(id)arg9 cumulativeBackgroundTaskAssertionTimeoutExitCount:(id)arg10;
- (id)initWithNormalAppExitCount:(unsigned long long)arg1 memoryResourceLimitExitCount:(unsigned long long)arg2 cpuResourceLimitExitCount:(unsigned long long)arg3 memoryPressureExitCount:(unsigned long long)arg4 badAccessExitCount:(unsigned long long)arg5 abnormalExitCount:(unsigned long long)arg6 illegalInstructionExitCount:(unsigned long long)arg7 appWatchDogExitCount:(unsigned long long)arg8 cumulativeSuspendedWithLockedFileExitCount:(unsigned long long)arg9 cumulativeBackgroundTaskAssertionTimeoutExitCount:(unsigned long long)arg10 cumulativeBackgroundURLSessionCompletionTimeoutExitCount:(unsigned long long)arg11 cumulativeBackgroundFetchCompletionTimeoutExitCount:(unsigned long long)arg12;
- (id)toDictionary;

@end
