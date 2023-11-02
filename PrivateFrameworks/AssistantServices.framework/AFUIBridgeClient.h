
@interface AFUIBridgeClient : NSObject <AFUIBridgeService, AFUIBridgeServiceDelegate> {
    <AFUIBridgeClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUIBridgeClientDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connection;
- (id)_uiBridgeService;
- (id)_uiBridgeServiceWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (oneway void)preheat;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (oneway void)siriDismissed;
- (oneway void)siriPrompted;
- (oneway void)siriWillPrompt;
- (oneway void)startAttending;
- (oneway void)stopAttendingWithReason:(unsigned long long)arg1;

@end
