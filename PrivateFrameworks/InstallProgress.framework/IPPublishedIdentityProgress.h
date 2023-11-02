
@interface IPPublishedIdentityProgress : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    LSApplicationIdentity * _lsIdentity;
    MIAppIdentity * _miIdentity;
    <IPPublishedIdentityProgressObserver> * _observer;
    IPInstallableProgressData * _progressData;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long finalPhase;
@property (nonatomic) unsigned long long installPhase;
@property (nonatomic, readonly) NSString *personaUniqueString;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (unsigned long long)completedUnitCountForPhase:(unsigned long long)arg1;
- (id)currentProgress;
- (unsigned long long)finalPhase;
- (void)finishProgressWithState:(unsigned long long)arg1;
- (id)initWithAppIdentity:(id)arg1 observer:(id)arg2;
- (unsigned long long)installPhase;
- (id)lsIdentity;
- (id)miIdentity;
- (id)personaUniqueString;
- (void)setCompletedUnitCount:(unsigned long long)arg1 forPhase:(unsigned long long)arg2;
- (void)setFinalPhase:(unsigned long long)arg1;
- (void)setInstallPhase:(unsigned long long)arg1;
- (void)setTotalUnitCount:(unsigned long long)arg1 forPhase:(unsigned long long)arg2;
- (void)setTotalUnitCountsForPhases:(id)arg1;
- (unsigned long long)totalUnitCountForPhase:(unsigned long long)arg1;

@end
