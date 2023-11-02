
@interface HFSetupStagedAccessoryPairingController : NSObject <HFSetupPairingController> {
    HMAccessorySetupCompletedInfo * _completedInfo;
    HFSetupPairingContext * _context;
    HFDiscoveredAccessory * _discoveredAccessoryToPair;
    HMHome * _home;
    NSSet * _pairedAccessories;
    NSHashTable * _pairingObservers;
    unsigned long long  _phase;
    HFSetupAccessoryResult * _setupResult;
    NSString * _statusDescription;
    NSString * _statusTitle;
}

@property (nonatomic, retain) HMAccessorySetupCompletedInfo *completedInfo;
@property (nonatomic, readonly) HFSetupPairingContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFDiscoveredAccessory *discoveredAccessoryToPair;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSSet *pairedAccessories;
@property (nonatomic, retain) NSHashTable *pairingObservers;
@property (nonatomic) unsigned long long phase;
@property (nonatomic, retain) HFSetupAccessoryResult *setupResult;
@property (nonatomic, retain) NSString *statusDescription;
@property (nonatomic, retain) NSString *statusTitle;
@property (readonly) Class superclass;

+ (bool)supportsSetupPayloadRetry;

- (void).cxx_destruct;
- (void)addPairingObserver:(id)arg1;
- (id)cancel;
- (id)completedInfo;
- (id)context;
- (id)discoveredAccessoryToPair;
- (id)home;
- (id)initWithContext:(id)arg1;
- (id)pairedAccessories;
- (id)pairingObservers;
- (unsigned long long)phase;
- (void)removePairingObserver:(id)arg1;
- (void)setCompletedInfo:(id)arg1;
- (void)setDiscoveredAccessoryToPair:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setPairedAccessories:(id)arg1;
- (void)setPairingObservers:(id)arg1;
- (void)setPhase:(unsigned long long)arg1;
- (void)setSetupResult:(id)arg1;
- (void)setStatusDescription:(id)arg1;
- (void)setStatusTitle:(id)arg1;
- (id)setupResult;
- (void)startWithHome:(id)arg1;
- (id)statusDescription;
- (id)statusTitle;

@end
