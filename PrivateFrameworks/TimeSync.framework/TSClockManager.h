
@interface TSClockManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientLock;
    NSPointerArray * _clients;
    TSDClockManager * _implDC;
    TSXClockManager * _implXPC;
    TSClock * _timeSyncClock;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _timebaseInfo;
    TSClock * _translationClock;
    TSDCTranslationClock * _translationClockDC;
}

@property (nonatomic, readonly) TSClock *timeSyncClock;
@property (nonatomic, readonly) unsigned long long timeSyncTimeClockIdentifier;
@property (nonatomic, readonly) bool timeSyncTimeIsMachAbsoluteTime;
@property (nonatomic, readonly) TSClock *translationClock;
@property (nonatomic, readonly) unsigned long long translationClockIdentifier;

+ (id)clockManager;
+ (id)diagnosticDescriptionForClockIdentifier:(unsigned long long)arg1 withIndent:(id)arg2;
+ (id)diagnosticDescriptionForInfo:(id)arg1 withIndent:(id)arg2;
+ (id)diagnosticInfo;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)arg1;
+ (id)frameworkClassNameForDaemonClassName:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingTimeSyncTimeClockIdentifier;
+ (id)keyPathsForValuesAffectingTimeSyncTimeIsMachAbsoluteTime;
+ (id)keyPathsForValuesAffectingTranslationClockIdentifier;
+ (void)notifyWhenClockManagerIsAvailable:(id /* block */)arg1;
+ (void)notifyWhenClockManagerIsUnavailable:(id /* block */)arg1;
+ (id)sharedClockManager;
+ (id)sharedClockManagerSyncWithTimeout:(unsigned long long)arg1;
+ (void)swiftClockManagerIsAvailable:(id /* block */)arg1;
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (bool)addMappingFromClockID:(unsigned long long)arg1 toCoreAudioClockDomain:(unsigned int*)arg2 error:(id*)arg3;
- (bool)addTSNCaptureServicesWithError:(id*)arg1;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)arg1 domainInterval:(unsigned long long)arg2 usingFilterShift:(unsigned char)arg3 isAdaptive:(bool)arg4 error:(id*)arg5;
- (bool)addgPTPServicesWithError:(id*)arg1;
- (id)availableClockIdentifiers;
- (id)clockWithClockIdentifier:(unsigned long long)arg1;
- (bool)getConnectionForClockWithClockIdentifier:(unsigned long long)arg1 daemonClockClassName:(id*)arg2 endpoint:(id*)arg3;
- (bool)getConnectionForPortWithClockIdentifier:(unsigned long long)arg1 portNumber:(unsigned short)arg2 daemonPortClassName:(id*)arg3 endpoint:(id*)arg4;
- (id)init;
- (void)interruptedClockManager;
- (unsigned long long)machAbsoluteNanosecondsToTicks:(unsigned long long)arg1;
- (unsigned long long)machAbsoluteTicksToNanoseconds:(unsigned long long)arg1;
- (unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)arg1;
- (unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)arg1;
- (bool)nextAvailableDynamicClockID:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)releaseDynamicClockID:(unsigned long long)arg1 error:(id*)arg2;
- (void)removeClient:(id)arg1;
- (bool)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removeTSNCaptureServicesWithError:(id*)arg1;
- (bool)removeUserFilteredClockWithIdentifier:(unsigned long long)arg1 error:(id*)arg2;
- (bool)removegPTPServicesWithError:(id*)arg1;
- (id)timeSyncClock;
- (unsigned long long)timeSyncTimeClockIdentifier;
- (bool)timeSyncTimeIsMachAbsoluteTime;
- (id)translationClock;
- (unsigned long long)translationClockIdentifier;

@end
