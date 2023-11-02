
@interface MXForegroundExitData : NSObject <NSSecureCoding> {
    unsigned long long  _cumulativeAbnormalExitCount;
    unsigned long long  _cumulativeAppWatchdogExitCount;
    unsigned long long  _cumulativeBadAccessExitCount;
    unsigned long long  _cumulativeCPUResourceLimitExitCount;
    unsigned long long  _cumulativeIllegalInstructionExitCount;
    unsigned long long  _cumulativeMemoryResourceLimitExitCount;
    unsigned long long  _cumulativeNormalAppExitCount;
}

@property (readonly) unsigned long long cumulativeAbnormalExitCount;
@property (readonly) unsigned long long cumulativeAppWatchdogExitCount;
@property (readonly) unsigned long long cumulativeBadAccessExitCount;
@property (readonly) unsigned long long cumulativeCPUResourceLimitExitCount;
@property (readonly) unsigned long long cumulativeIllegalInstructionExitCount;
@property (readonly) unsigned long long cumulativeMemoryResourceLimitExitCount;
@property (readonly) unsigned long long cumulativeNormalAppExitCount;

+ (bool)supportsSecureCoding;

- (unsigned long long)cumulativeAbnormalExitCount;
- (unsigned long long)cumulativeAppWatchdogExitCount;
- (unsigned long long)cumulativeBadAccessExitCount;
- (unsigned long long)cumulativeCPUResourceLimitExitCount;
- (unsigned long long)cumulativeIllegalInstructionExitCount;
- (unsigned long long)cumulativeMemoryResourceLimitExitCount;
- (unsigned long long)cumulativeNormalAppExitCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNormalAppExitCount:(id)arg1 memoryResourceLimitExitCount:(id)arg2 cpuResourceLimitExitCount:(id)arg3 badAccessExitCount:(id)arg4 abnormalExitCount:(id)arg5 illegalInstructionExitCount:(id)arg6 appWatchDogExitCount:(id)arg7;
- (id)initWithNormalAppExitCount:(unsigned long long)arg1 withMemoryResourceLimitExitCount:(unsigned long long)arg2 withCPUResourceLimitExitCount:(unsigned long long)arg3 withBadAccessExitCount:(unsigned long long)arg4 withAbnormalExitCount:(unsigned long long)arg5 withIllegalInstructionExitCount:(unsigned long long)arg6 withAppWatchDogExitCount:(unsigned long long)arg7;
- (id)toDictionary;

@end
