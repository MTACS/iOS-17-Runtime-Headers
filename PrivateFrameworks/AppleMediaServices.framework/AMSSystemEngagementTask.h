
@interface AMSSystemEngagementTask : AMSTask <AMSBagConsumer, AMSSystemEngagementTaskClientInterface, NSXPCListenerDelegate, SBSRemoteAlertHandleObserver> {
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    bool  _disablePresentationTarget;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    <NSObject> * _displayDidBecomeActiveToken;
    FBSDisplayLayoutMonitor * _displayLayoutMonitor;
    <NSObject> * _displayWillForegroundToken;
    NSError * _error;
    RBSProcessHandle * _presentationTargetHandle;
    SBSRemoteAlertHandle * _remoteAlertHandle;
    NSXPCListener * _remoteListener;
    AMSEngagementRequest * _request;
    AMSEngagementResult * _result;
    NSXPCConnection * _underlyingRemoteConnection;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disablePresentationTarget;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (nonatomic, retain) <NSObject> *displayDidBecomeActiveToken;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *displayLayoutMonitor;
@property (nonatomic, retain) <NSObject> *displayWillForegroundToken;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RBSProcessHandle *presentationTargetHandle;
@property (nonatomic, retain) SBSRemoteAlertHandle *remoteAlertHandle;
@property (nonatomic, retain) NSXPCListener *remoteListener;
@property (nonatomic, readonly) AMSEngagementRequest *request;
@property (nonatomic, retain) AMSEngagementResult *result;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *underlyingRemoteConnection;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_activateIfWithError:(id*)arg1;
- (void)_finishTaskWithResult:(id)arg1 error:(id)arg2;
- (void)_invalidateRemoteAlert;
- (void)_listenForAppForegroundWithHandle:(id)arg1 usesAuditToken:(bool)arg2;
- (id)_snapshotBagDataPromise;
- (id)_unlockDeviceIfNeeded;
- (id)bag;
- (id)clientInfo;
- (bool)disablePresentationTarget;
- (id)dispatchGroup;
- (id)displayDidBecomeActiveToken;
- (id)displayLayoutMonitor;
- (id)displayWillForegroundToken;
- (void)engagementTaskDidFinishWithResult:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (id)error;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 bag:(id)arg2;
- (void)initializeClientToViewServiceConnection;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)present;
- (id)presentationTargetHandle;
- (id)remoteAlertHandle;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (id)remoteListener;
- (id)request;
- (id)result;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDisablePresentationTarget:(bool)arg1;
- (void)setDispatchGroup:(id)arg1;
- (void)setDisplayDidBecomeActiveToken:(id)arg1;
- (void)setDisplayLayoutMonitor:(id)arg1;
- (void)setDisplayWillForegroundToken:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPresentationTargetHandle:(id)arg1;
- (void)setRemoteAlertHandle:(id)arg1;
- (void)setRemoteListener:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setUnderlyingRemoteConnection:(id)arg1;
- (id)underlyingRemoteConnection;

@end
