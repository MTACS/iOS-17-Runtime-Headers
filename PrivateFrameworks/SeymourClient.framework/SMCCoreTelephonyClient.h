
@interface SMCCoreTelephonyClient : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientDelegate> {
    bool  _cellularDataEnabled;
    CoreTelephonyClient * _ctClient;
    struct __CTServerConnection { } * _ctServerConnection;
    <SMCCoreTelephonyClientDelegate> * _delegate;
    CTXPCServiceSubscriptionContext * _preferredDataSubscriptionContext;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _roaming;
}

@property (nonatomic) bool cellularDataEnabled;
@property (nonatomic, readonly) CoreTelephonyClient *ctClient;
@property (nonatomic, readonly) struct __CTServerConnection { }*ctServerConnection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SMCCoreTelephonyClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *preferredDataSubscriptionContext;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool roaming;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_getRoamingFromDataStatus:(id)arg1;
- (void)_updatePreferredDataSubscriptionContext;
- (void)activate;
- (void)activeSubscriptionsDidChange;
- (bool)cellularDataEnabled;
- (struct { int x1; int x2; })cellularDataEnabled:(out char *)arg1;
- (id)ctClient;
- (struct __CTServerConnection { }*)ctServerConnection;
- (void)dataSettingsChanged:(id)arg1;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (id)delegate;
- (id)initWithQueue:(id)arg1;
- (void)internetDataStatus:(id)arg1;
- (id)preferredDataSubscriptionContext;
- (id)queue;
- (bool)roaming;
- (void)roaming:(out char *)arg1 error:(out id*)arg2;
- (void)servingNetworkChanged:(id)arg1;
- (void)setCellularDataEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreferredDataSubscriptionContext:(id)arg1;
- (void)setRoaming:(bool)arg1;

@end
