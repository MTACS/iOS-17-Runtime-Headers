
@interface _RELocalTrainingContext : RETrainingContext <RERemoteTrainingServerInterface> {
    NSXPCConnection * _connection;
    id /* block */  _invalidationHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureForRelevanceEngine:(id)arg1;
- (id)_elementRelevanceEngine;
- (void)_handleInvalidation;
- (id)initWithConnection:(id)arg1;
- (id /* block */)invalidationHandler;
- (void)performTrainingWithElements:(id)arg1 events:(id)arg2 interactions:(id)arg3 completion:(id /* block */)arg4;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)updateRemoteAttribute:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;

@end
