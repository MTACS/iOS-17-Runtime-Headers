
@interface TSXClockManager : TSXClient <TSXClockManagerClientProtocol> {
    TSClockManager * _clockManager;
    unsigned long long  _timeSyncTimeClockIdentifier;
    bool  _timeSyncTimeIsMachAbsoluteTime;
    TSXTranslationClock * _translationClock;
    unsigned long long  _translationClockIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timeSyncTimeClockIdentifier;
@property (nonatomic, readonly) bool timeSyncTimeIsMachAbsoluteTime;
@property (nonatomic, readonly) TSXTranslationClock *translationClock;
@property (nonatomic, readonly) unsigned long long translationClockIdentifier;

+ (void)_setIsAvailable;
+ (void)_setIsUnavailable;
+ (id)clientProtocol;
+ (void)initialize;
+ (id)serverProtocol;
+ (id)serviceName;

- (void).cxx_destruct;
- (bool)addMappingFromClockID:(unsigned long long)arg1 toCoreAudioClockDomain:(unsigned int*)arg2 error:(id*)arg3;
- (bool)addTSNCaptureServicesWithError:(id*)arg1;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)arg1 domainInterval:(unsigned long long)arg2 usingFilterShift:(unsigned char)arg3 isAdaptive:(bool)arg4 error:(id*)arg5;
- (bool)addgPTPServicesWithError:(id*)arg1;
- (id)availableClockIdentifiers;
- (void)changedTranslationClockMaster;
- (id)exportedObject;
- (bool)getConnectionForClockWithClockIdentifier:(unsigned long long)arg1 daemonClockClassName:(id*)arg2 endpoint:(id*)arg3;
- (bool)getConnectionForPortWithClockIdentifier:(unsigned long long)arg1 portNumber:(unsigned short)arg2 daemonPortClassName:(id*)arg3 endpoint:(id*)arg4;
- (unsigned long long)getTimeSyncTimeClockIdentifier;
- (bool)getTimeSyncTimeIsMachAbsoluteTime;
- (unsigned long long)getTranslationClockIdentifier;
- (id)initWithClockManager:(id)arg1;
- (void)interruptedConnection;
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
- (void)updateTranslationClockLockState:(int)arg1;
- (void)updateTranslationClockState;
- (void)updateTranslationClockTimeSyncTime:(unsigned long long)arg1 timeSyncInterval:(unsigned long long)arg2 domainTime:(unsigned long long)arg3 domainInterval:(unsigned long long)arg4;

@end
