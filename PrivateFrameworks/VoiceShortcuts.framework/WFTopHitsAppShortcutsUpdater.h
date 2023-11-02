
@interface WFTopHitsAppShortcutsUpdater : NSObject {
    _CDContextualChangeRegistration * _changeRegistration;
    _CDClientContext * _clientContext;
    SwiftVCDaemonXPCEventHandler * _xpcEventHandler;
}

@property (nonatomic, retain) _CDContextualChangeRegistration *changeRegistration;
@property (nonatomic, retain) _CDClientContext *clientContext;
@property (nonatomic, retain) SwiftVCDaemonXPCEventHandler *xpcEventHandler;

- (void).cxx_destruct;
- (void)applicationRegistered:(id)arg1;
- (id)changeRegistration;
- (id)clientContext;
- (void)handleFavoriteCallsUpdate;
- (void)handleRecentCallsUpdate;
- (id)initWithXPCEventHandler:(id)arg1;
- (void)registerForUpcomingMediaSuggestionChanged;
- (void)setChangeRegistration:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setXpcEventHandler:(id)arg1;
- (void)start;
- (void)updateWithCompletion:(id /* block */)arg1;
- (id)xpcEventHandler;

@end
