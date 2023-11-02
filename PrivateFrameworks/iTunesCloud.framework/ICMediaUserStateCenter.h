
@interface ICMediaUserStateCenter : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSArray * _allUserStates;
    NSObject<OS_dispatch_queue> * _completionHandlersQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _refreshUserStateCompletionHandlers;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) ICMediaUserState *activeUserState;
@property (nonatomic, copy) NSArray *allUserStates;

+ (id)shared;

- (void).cxx_destruct;
- (void)_applyServerStateUpdatedWithUserStates:(id)arg1;
- (void)_clearConnection;
- (id)_establishClientConnection;
- (id)_getUserStatesCacheOnly;
- (id)_getUserStatesForcingRefresh:(bool)arg1;
- (void)_handleServerStateUpdatedNotification:(id)arg1;
- (id)_initLazily:(bool)arg1;
- (void)_onAsyncServer:(id /* block */)arg1;
- (void)_onSyncServer:(id /* block */)arg1;
- (id)activeUserState;
- (id)allUserStates;
- (void)dealloc;
- (id)initLazily;
- (void)refreshUserStatesWithCompletion:(id /* block */)arg1;
- (void)refreshUserStatesWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)setAllUserStates:(id)arg1;

@end
