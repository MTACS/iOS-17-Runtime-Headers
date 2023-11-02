
@interface COMTActionDirector : NSObject {
    NSMutableArray * _actionHandler;
    bool  _activated;
    COCluster * _cluster;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSet * _members;
    COMessageChannel * _messageChannel;
    COClusterRoleMonitor * _monitor;
    <NSObject> * _monitorObserver;
    <COMTActionDirectorServiceProvider> * _provider;
}

@property (nonatomic, retain) NSMutableArray *actionHandler;
@property (nonatomic, readonly) bool activated;
@property (nonatomic, readonly) unsigned long long chunkSize;
@property (nonatomic, readonly) COCluster *cluster;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSSet *members;
@property (nonatomic, readonly) COMessageChannel *messageChannel;
@property (nonatomic, readonly) COClusterRoleMonitor *monitor;
@property (nonatomic, retain) <NSObject> *monitorObserver;
@property (nonatomic, readonly) <COMTActionDirectorServiceProvider> *provider;

+ (id)directorForCluster:(id)arg1;

- (void).cxx_destruct;
- (bool)_activate;
- (void)_notifyHandlerOfSnapshotChanges_unsafe:(id)arg1;
- (id)_requestHandlerForAction:(id)arg1;
- (id)_requestHandlerForTypedAction:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)actionHandler;
- (bool)activated;
- (unsigned long long)chunkSize;
- (id)cluster;
- (void)dealloc;
- (id)dispatchQueue;
- (void)handleMembersChanged:(id)arg1;
- (void)handlePerformActionRequest:(id)arg1 from:(id)arg2 callback:(id /* block */)arg3;
- (id)initWithCluster:(id)arg1;
- (id)initWithProvider:(id)arg1 cluster:(id)arg2;
- (id)members;
- (id)messageChannel;
- (id)monitor;
- (id)monitorObserver;
- (id)provider;
- (void)registerHandler:(id)arg1 forType:(id)arg2 actions:(id)arg3 queue:(id)arg4;
- (void)removeHandler:(id)arg1;
- (void)requestAction:(id)arg1 members:(id)arg2 activity:(id)arg3 fallback:(id /* block */)arg4 withCompletion:(id /* block */)arg5;
- (void)requestAction:(id)arg1 members:(id)arg2 activity:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)requestAction:(id)arg1 members:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)requestActions:(id)arg1 members:(id)arg2 activity:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)requestActions:(id)arg1 members:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setActionHandler:(id)arg1;
- (void)setMembers:(id)arg1;
- (void)setMonitorObserver:(id)arg1;

@end
