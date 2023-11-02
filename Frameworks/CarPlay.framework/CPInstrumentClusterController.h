
@interface CPInstrumentClusterController : NSObject {
    NSArray * _attributedInactiveDescriptionVariants;
    unsigned long long  _compassSetting;
    NSXPCConnection * _connection;
    <CPInstrumentClusterControllerDelegate> * _delegate;
    NSArray * _inactiveDescriptionVariants;
    <CPInstrumentClusterProviding> * _instrumentClusterProvider;
    UIWindow * _instrumentClusterWindow;
    unsigned long long  _speedLimitSetting;
}

@property (nonatomic, copy) NSArray *attributedInactiveDescriptionVariants;
@property (nonatomic, readonly) unsigned long long compassSetting;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <CPInstrumentClusterControllerDelegate> *delegate;
@property (nonatomic, copy) NSArray *inactiveDescriptionVariants;
@property (nonatomic, retain) <CPInstrumentClusterProviding> *instrumentClusterProvider;
@property (nonatomic, readonly) UIWindow *instrumentClusterWindow;
@property (nonatomic, readonly) unsigned long long speedLimitSetting;

+ (id)_clusterProvidingInterface;

- (void).cxx_destruct;
- (void)_connectToListenerEndpoint:(id)arg1;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (id)_init;
- (void)_invalidate;
- (void)_sceneConnect:(id)arg1;
- (id)attributedInactiveDescriptionVariants;
- (unsigned long long)compassSetting;
- (id)connection;
- (id)delegate;
- (id)inactiveDescriptionVariants;
- (id)instrumentClusterProvider;
- (id)instrumentClusterWindow;
- (void)setAttributedInactiveDescriptionVariants:(id)arg1;
- (void)setCompassSetting:(unsigned long long)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInactiveDescriptionVariants:(id)arg1;
- (void)setInstrumentClusterProvider:(id)arg1;
- (void)setInstrumentClusterWindow:(id)arg1;
- (void)setSpeedLimitSetting:(unsigned long long)arg1;
- (unsigned long long)speedLimitSetting;

@end
