
@interface RTIInputSystemService : NSObject <NSXPCListenerDelegate, RTIInputSystemSessionDelegate> {
    RTIInputSystemServiceSession * _currentSession;
    <RTIInputSystemDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _enabled;
    NSString * _lastAppId;
    NSXPCListener * _listener;
    NSString * _machName;
    NSMutableSet * _sessions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sessionsLock;
}

@property (nonatomic, readonly) RTIInputSystemServiceSession *currentSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RTIInputSystemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastAppId;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, retain) NSString *machName;
@property (readonly) Class superclass;

+ (Class)serviceSessionClass;
+ (id)sharedServiceWithMachName:(id)arg1;

- (void).cxx_destruct;
- (bool)_canResumeConnection;
- (void)_createListenerIfNecessary;
- (void)_destroyListenerIfNecessary;
- (id)currentSession;
- (void)dealloc;
- (id)delegate;
- (id)dispatchQueue;
- (id)initWithMachName:(id)arg1;
- (void)inputSession:(id)arg1 didAddRTISupplementalLexicon:(id)arg2;
- (void)inputSession:(id)arg1 didAddSupplementalLexicon:(id)arg2;
- (void)inputSession:(id)arg1 didChangePause:(bool)arg2 withReason:(id)arg3;
- (void)inputSession:(id)arg1 didReceiveConnection:(id)arg2;
- (void)inputSession:(id)arg1 didRemoveRTISupplementalLexicon:(id)arg2;
- (void)inputSession:(id)arg1 didRemoveSupplementalLexicon:(id)arg2;
- (void)inputSession:(id)arg1 documentStateDidChange:(id)arg2;
- (void)inputSession:(id)arg1 documentTraitsDidChange:(id)arg2;
- (void)inputSession:(id)arg1 performInputOperation:(id)arg2;
- (void)inputSession:(id)arg1 performInputOperation:(id)arg2 withResponse:(id /* block */)arg3;
- (void)inputSession:(id)arg1 textSuggestionsChanged:(id)arg2;
- (void)inputSessionDidBegin:(id)arg1 options:(id)arg2;
- (void)inputSessionDidDie:(id)arg1;
- (void)inputSessionDidEnd:(id)arg1 options:(id)arg2;
- (void)inputSessionDidEnd:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (bool)isEnabled;
- (id)lastAppId;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (id)machName;
- (void)prepareForInputSession:(id)arg1 options:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLastAppId:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setMachName:(id)arg1;

@end
