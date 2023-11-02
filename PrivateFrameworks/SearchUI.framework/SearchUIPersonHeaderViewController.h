
@interface SearchUIPersonHeaderViewController : CNGroupIdentityHeaderViewController <SKStatusSubscriptionServiceDelegate> {
    <NSObject> * _downtimeStatusObserver;
    CNGroupIdentityActionItem * _openContactAction;
    bool  _showingDowntimeBadge;
    NSArray * _statusSubcriptions;
    SKStatusSubscriptionService * _subscriptionService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <NSObject> *downtimeStatusObserver;
@property (readonly) unsigned long long hash;
@property (retain) CNGroupIdentityActionItem *openContactAction;
@property (nonatomic) bool showingDowntimeBadge;
@property (retain) NSArray *statusSubcriptions;
@property (retain) SKStatusSubscriptionService *subscriptionService;
@property (readonly) Class superclass;

+ (id)downtimeBadgeStyleSettings;

- (void).cxx_destruct;
- (id)STUserID;
- (id)actionsViewConfigurationWithDowntimeButton:(bool)arg1;
- (id)contactNameFor:(id)arg1;
- (void)dealloc;
- (id)downtimeStatusObserver;
- (void)groupIdentityDidUpdate:(id)arg1;
- (void)handleConfirmDowntimeToggleFor:(id)arg1;
- (void)handleErrorResultFromDowntimeToggleFor:(id)arg1 withError:(id)arg2;
- (id)init;
- (id)initWithDowntimeButton:(bool)arg1;
- (id)openContactAction;
- (void)setDowntimeStatusObserver:(id)arg1;
- (void)setOpenContactAction:(id)arg1;
- (void)setShowingDowntimeBadge:(bool)arg1;
- (void)setStatusSubcriptions:(id)arg1;
- (void)setSubscriptionService:(id)arg1;
- (void)setupDowntimeStatusSubscription;
- (bool)showingDowntimeBadge;
- (id)statusSubcriptions;
- (void)subscriptionInvitationReceived:(id)arg1;
- (void)subscriptionReceivedStatusUpdate:(id)arg1;
- (id)subscriptionService;
- (void)subscriptionStateChanged:(id)arg1;
- (void)updateDowntimeBadge;
- (void)updateDowntimeBadgeForceRecheck:(bool)arg1;
- (void)updateSubscriptions;
- (void)updateWithContact:(id)arg1 isActualContact:(bool)arg2;
- (bool)userIsUnavailable;
- (void)viewDidLoad;

@end
