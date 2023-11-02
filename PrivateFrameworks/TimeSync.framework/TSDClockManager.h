
@interface TSDClockManager : NSObject {
    NSMutableArray * _clockPersonalities;
    IODConnection * _connection;
    int  _pid;
    unsigned long long  _timeSyncTimeClockIdentifier;
    bool  _timeSyncTimeIsMachAbsoluteTime;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _timebaseInfo;
    TSDKernelClock * _translationClock;
    unsigned long long  _translationClockIdentifier;
}

@property (nonatomic, readonly) unsigned long long timeSyncTimeClockIdentifier;
@property (nonatomic, readonly) bool timeSyncTimeIsMachAbsoluteTime;
@property (nonatomic, readonly) TSDKernelClock *translationClock;
@property (nonatomic, readonly) unsigned long long translationClockIdentifier;

+ (id)clockManager;
+ (id)daemonClassNameForClockIdentifier:(unsigned long long)arg1;
+ (id)defaultClockPersonalities;
+ (id)diagnosticInfo;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)arg1 daemonClassName:(id*)arg2;
+ (void)initialize;
+ (void)notifyWhenClockManagerIsAvailable:(id /* block */)arg1;
+ (void)notifyWhenClockManagerIsUnavailable:(id /* block */)arg1;
+ (id)sharedClockManager;
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)addMappingFromClockID:(unsigned long long)arg1 toCoreAudioClockDomain:(unsigned int*)arg2 error:(id*)arg3;
- (bool)addTSNCaptureServicesWithError:(id*)arg1;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)arg1 domainInterval:(unsigned long long)arg2 usingFilterShift:(unsigned char)arg3 isAdaptive:(bool)arg4 error:(id*)arg5;
- (bool)addgPTPServicesWithError:(id*)arg1;
- (id)availableClockIdentifiers;
- (id)classNameForClockService:(id)arg1;
- (id)clockWithClockIdentifier:(unsigned long long)arg1;
- (bool)getTimeSyncTimeClockID:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)getTimeSyncTimeIsMachAbsolute:(bool*)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithPid:(int)arg1;
- (unsigned long long)machAbsoluteNanosecondsToTicks:(unsigned long long)arg1;
- (unsigned long long)machAbsoluteTicksToNanoseconds:(unsigned long long)arg1;
- (bool)nextAvailableDynamicClockID:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)releaseDynamicClockID:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removeTSNCaptureServicesWithError:(id*)arg1;
- (bool)removeUserFilteredClockWithIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removegPTPServicesWithError:(id*)arg1;
- (unsigned long long)timeSyncTimeClockIdentifier;
- (bool)timeSyncTimeIsMachAbsoluteTime;
- (id)translationClock;
- (unsigned long long)translationClockIdentifier;

@end
