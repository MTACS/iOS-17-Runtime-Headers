
@interface VCWifiAssistManager : NSObject <NWNetworkOfInterestManagerDelegate> {
    NSMutableSet * _delegates;
    bool  _inBudget;
    NWNetworkOfInterestManager * _manager;
    VCDispatchTimer * _refreshTimer;
    bool  _respectBudgetStatusEnabled;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _userPrefered;
    NWNetworkOfInterest * _wifiNOI;
}

@property (readonly) bool isAvailable;
@property (readonly) unsigned char wifiAssistState;

+ (id)sharedInstance;

- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)didStartTrackingNOI:(id)arg1;
- (void)didStopTrackingNOI:(id)arg1;
- (id)init;
- (bool)isAvailable;
- (void)queryBudget;
- (void)queryUserPreference;
- (void)refreshBudget;
- (void)removeDelegate:(id)arg1;
- (unsigned char)wifiAssistState;

@end
