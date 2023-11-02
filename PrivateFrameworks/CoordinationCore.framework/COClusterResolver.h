
@interface COClusterResolver : NSObject {
    bool  _activatedCluster;
    bool  _bootstrapCompleted;
    COCluster * _cluster;
    NSString * _currentIdentifier;
    <COClusterResolverDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _waitingForBootstrap;
}

@property (nonatomic) bool activatedCluster;
@property (nonatomic) bool bootstrapCompleted;
@property (nonatomic, readonly) COCluster *cluster;
@property (nonatomic, retain) NSString *currentIdentifier;
@property (nonatomic, readonly) <COClusterResolverDelegate> *delegate;
@property (nonatomic, retain) NSArray *waitingForBootstrap;

+ (id)resolverForCluster:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (void)_activate;
- (void)_delegateNotifyClusterIdentifierChanged:(id)arg1;
- (id)_initWithCluster:(id)arg1 delegate:(id)arg2;
- (void)_invokeBootstrapBlocks;
- (bool)_updateIdentifier:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (void)activate;
- (bool)activatedCluster;
- (bool)bootstrapCompleted;
- (id)cluster;
- (id)currentIdentifier;
- (id)delegate;
- (id)description;
- (void)setActivatedCluster:(bool)arg1;
- (void)setBootstrapCompleted:(bool)arg1;
- (void)setCurrentIdentifier:(id)arg1;
- (void)setWaitingForBootstrap:(id)arg1;
- (id)waitingForBootstrap;

@end
