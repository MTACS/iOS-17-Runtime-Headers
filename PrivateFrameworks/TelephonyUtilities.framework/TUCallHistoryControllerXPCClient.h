
@interface TUCallHistoryControllerXPCClient : NSObject <TUCallHistoryControllerDataSource, TUCallHistoryControllerXPCClient> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    bool  _hasInitialState;
    bool  _hasRequestedInitialState;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldConnectToHost;
    int  _shouldConnectToken;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasInitialState;
@property (nonatomic) bool hasRequestedInitialState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool shouldConnectToHost;
@property (nonatomic) int shouldConnectToken;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)asynchronousServer;
+ (id)callHistoryControllerAllowedClasses;
+ (id)callHistoryControllerClientXPCInterface;
+ (id)callHistoryControllerServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;

- (void).cxx_destruct;
- (void)_invokeCompletionHandler:(id /* block */)arg1;
- (void)_requestInitialStateIfNecessary;
- (void)_requestInitialStateWithCompletionHandler:(id /* block */)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (void)allCallHistoryDeleted;
- (id)asynchronousServerWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (bool)hasInitialState;
- (bool)hasRequestedInitialState;
- (id)init;
- (void)invalidate;
- (id)queue;
- (void)recentCallsDeleted:(id)arg1;
- (void)registerWithCompletionHandler:(id /* block */)arg1;
- (void)setHasInitialState:(bool)arg1;
- (void)setHasRequestedInitialState:(bool)arg1;
- (void)setShouldConnectToHost:(bool)arg1;
- (void)setShouldConnectToken:(int)arg1;
- (void)setXpcConnection:(id)arg1;
- (bool)shouldConnectToHost;
- (int)shouldConnectToken;
- (id)synchronousServerWithErrorHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
