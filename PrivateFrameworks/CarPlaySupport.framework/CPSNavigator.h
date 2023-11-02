
@interface CPSNavigator : NSObject <BSInvalidatable, CARNavigationOwnershipManagerDelegate, CPNavigationSessionManaging> {
    bool  _appSupportsInstrumentCluster;
    bool  _completed;
    CARSession * _currentSession;
    NSHashTable * _displayDelegates;
    <CARNavigationOwnershipManagerDelegate> * _navigationOwnershipDelegate;
    CARNavigationOwnershipManager * _navigationOwnershipManager;
    CPTrip * _trip;
}

@property (nonatomic) bool appSupportsInstrumentCluster;
@property (getter=isCompleted, nonatomic) bool completed;
@property (nonatomic, retain) CARSession *currentSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSHashTable *displayDelegates;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CARNavigationOwnershipManagerDelegate> *navigationOwnershipDelegate;
@property (nonatomic, retain) CARNavigationOwnershipManager *navigationOwnershipManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) CPTrip *trip;

- (void).cxx_destruct;
- (void)addDisplayDelegate:(id)arg1;
- (bool)appSupportsInstrumentCluster;
- (void)cancelTrip;
- (id)currentSession;
- (void)dealloc;
- (id)displayDelegates;
- (void)finishTrip;
- (id)initWithIdentifier:(id)arg1 currentSession:(id)arg2;
- (void)invalidate;
- (bool)isCompleted;
- (void)navigationOwnershipChangedToOwner:(unsigned long long)arg1;
- (id)navigationOwnershipDelegate;
- (id)navigationOwnershipManager;
- (void)pauseTripForReason:(unsigned long long)arg1 description:(id)arg2 turnCardColor:(id)arg3;
- (void)removeDisplayDelegate:(id)arg1;
- (void)setAppSupportsInstrumentCluster:(bool)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setCurrentSession:(id)arg1;
- (void)setDisplayDelegates:(id)arg1;
- (void)setNavigationOwnershipDelegate:(id)arg1;
- (void)setNavigationOwnershipManager:(id)arg1;
- (void)setTrip:(id)arg1;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (id)trip;
- (void)updateTravelEstimates:(id)arg1 forManeuver:(id)arg2;
- (void)updateTripTravelEstimates:(id)arg1;

@end
