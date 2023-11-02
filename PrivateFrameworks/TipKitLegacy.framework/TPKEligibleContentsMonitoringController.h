
@interface TPKEligibleContentsMonitoringController : NSObject <TPSEventsProviderDelegate> {
    NSString * _context;
    TPKContent * _currentContent;
    <TPKEligibleContentsMonitoringControllerDelegate> * _delegate;
    TPSDuetEventsProvider * _duetEventsProvider;
    NSArray * _eligibleContents;
}

@property (nonatomic, copy) NSString *context;
@property (nonatomic, copy) TPKContent *currentContent;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TPKEligibleContentsMonitoringControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TPSDuetEventsProvider *duetEventsProvider;
@property (nonatomic, copy) NSArray *eligibleContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_currentContentIdentifierForContext:(id)arg1;
+ (id)_eligibleContentsIdentifierForContext:(id)arg1;
+ (id)_identifierForContext:(id)arg1 withPrefix:(id)arg2;
+ (id)_legacyIdentifierForContext:(id)arg1;

- (void).cxx_destruct;
- (void)_clearLegacyCachedContent;
- (void)clearContents;
- (id)clientContextKeysForCurrentStateInContents:(id)arg1;
- (id)clientContextMatchingResultsForContents:(id)arg1 clientContextKeys:(id)arg2;
- (bool)conditionsMatchForClientContextEvents:(id)arg1 clientContextMap:(id)arg2;
- (id)contents;
- (id)context;
- (id)currentContent;
- (void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2;
- (void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deregisterAllEventsForCallback;
- (void)didDisplayContent:(id)arg1;
- (id)duetEventsProvider;
- (id)eligibleContents;
- (id)initWithContext:(id)arg1;
- (void)invalidateClientContextIfNeeded;
- (void)manualDismissContent:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentContent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuetEventsProvider:(id)arg1;
- (void)setEligibleContents:(id)arg1;
- (void)updateCurrentContentCache:(id)arg1;
- (void)updateEligibilityWithContents:(id)arg1;
- (void)updateEligibleContentsCache:(id)arg1;
- (void)updateRegistrableEventsForCallbackIfNeeded;

@end
