
@interface CXVoicemailSource : NSObject <CXVoicemailProviderHostProtocol, CXVoicemailProviderVendorProtocol> {
    bool  _connected;
    <CXVoicemailSourceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *bundleURL;
@property (getter=isConnected, nonatomic) bool connected;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXVoicemailSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isPermittedToUsePrivateAPI, nonatomic, readonly) bool permittedToUsePrivateAPI;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CXVoicemailProviderVendorProtocol> *vendorProtocolDelegate;

- (void).cxx_destruct;
- (oneway void)actionCompleted:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginWithCompletionHandler:(id /* block */)arg1;
- (id)bundle;
- (id)bundleIdentifier;
- (id)bundleURL;
- (oneway void)commitTransaction:(id)arg1;
- (id)delegate;
- (id)description;
- (oneway void)handleActionTimeout:(id)arg1;
- (id)identifier;
- (id)init;
- (bool)isConnected;
- (bool)isPermittedToUsePrivateAPI;
- (int)processIdentifier;
- (id)queue;
- (oneway void)registerWithConfiguration:(id)arg1;
- (oneway void)reportNewVoicemailsWithUpdates:(id)arg1;
- (oneway void)reportVoicemailsRemovedWithUUIDs:(id)arg1;
- (oneway void)reportVoicemailsUpdated:(id)arg1;
- (oneway void)requestTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConnected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)vendorProtocolDelegate;

@end
