
@interface MRURouteRecommender : NSObject <IRSessionDelegate> {
    NSArray * _donatedRoutes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _donatedRoutesLock;
    NSObject<OS_dispatch_queue> * _donationQueue;
    int  _firstUnlockToken;
    <MRRouteRepresentable> * _lastDonatedPickerChoice;
    long long  _mode;
    NSArray * _recommendedRoutes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _recommendedRoutesLock;
    IRServiceToken * _serviceToken;
    IRSession * _session;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *donatedRoutes;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } donatedRoutesLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *donationQueue;
@property (nonatomic) int firstUnlockToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MRRouteRepresentable> *lastDonatedPickerChoice;
@property (nonatomic) long long mode;
@property (nonatomic, retain) NSArray *recommendedRoutes;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } recommendedRoutesLock;
@property (nonatomic, retain) IRServiceToken *serviceToken;
@property (nonatomic, retain) IRSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addDonatedRoute:(id)arg1;
- (void)donateGroupedOutputDevices:(id)arg1;
- (void)donatePickerChoiceFor:(id)arg1 presentingAppBundleId:(id)arg2 nowPlayingAppBundleId:(id)arg3 visibleMediaApps:(id)arg4;
- (id)donatedRoutes;
- (struct os_unfair_lock_s { unsigned int x1; })donatedRoutesLock;
- (id)donationQueue;
- (int)firstUnlockToken;
- (id)init;
- (void)initializeSession;
- (void)initializeSessionWhenAppropriate;
- (id)irCandidateFor:(id)arg1;
- (id)lastDonatedPickerChoice;
- (id)localizeRemoteControllableBundleIdentifier:(id)arg1;
- (long long)mode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)recommendationForGroupedOutputDevices:(id)arg1;
- (id)recommendedRoutes;
- (struct os_unfair_lock_s { unsigned int x1; })recommendedRoutesLock;
- (id)serviceToken;
- (id)session;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didUpdateContext:(id)arg2;
- (void)session:(id)arg1 suspendedWithReason:(long long)arg2;
- (void)session:(id)arg1 suspensionReasonEnded:(long long)arg2 isNoLongerSuspended:(bool)arg3;
- (void)setDonatedRoutes:(id)arg1;
- (void)setDonationQueue:(id)arg1;
- (void)setFirstUnlockToken:(int)arg1;
- (void)setLastDonatedPickerChoice:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setRecommendedRoutes:(id)arg1;
- (void)setServiceToken:(id)arg1;
- (void)setSession:(id)arg1;
- (id)sortEndpointRoutes:(id)arg1;
- (void)updateRecommendations;
- (id)userDefaults;

@end
