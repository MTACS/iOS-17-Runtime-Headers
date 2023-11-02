
@interface CPDashboardController : NSObject <CPDashboardClientInterface> {
    NSXPCConnection * _connection;
    <CPDashboardProviding> * _dashboardProvider;
    NSArray * _shortcutButtons;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) <CPDashboardProviding> *dashboardProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *shortcutButtons;
@property (readonly) Class superclass;

+ (id)_dashboardClientInterface;
+ (id)_dashboardProvidingInterface;

- (void).cxx_destruct;
- (void)_connectToListenerEndpoint:(id)arg1;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (id)_init;
- (void)_invalidate;
- (void)_sceneConnect:(id)arg1;
- (id)connection;
- (id)dashboardProvider;
- (void)handleActionForControlIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDashboardProvider:(id)arg1;
- (void)setShortcutButtons:(id)arg1;
- (id)shortcutButtons;

@end
