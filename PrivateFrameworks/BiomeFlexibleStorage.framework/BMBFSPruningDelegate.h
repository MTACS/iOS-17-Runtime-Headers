
@interface BMBFSPruningDelegate : NSObject <BMStreamDatastorePruningDelegate> {
    NSMutableArray * _prunedIdentifiables;
    NSObject<OS_dispatch_queue> * _queue;
    BMRegistrar * _registrar;
    NSString * _streamId;
}

@property (nonatomic, retain) NSMutableArray *prunedIdentifiables;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) BMRegistrar *registrar;
@property (nonatomic, readonly) NSString *streamId;

+ (id)new;

- (void).cxx_destruct;
- (void)didPruneEvents;
- (id)init;
- (id)initWithStreamId:(id)arg1;
- (id)initWithStreamId:(id)arg1 registrar:(id)arg2;
- (id)prunedIdentifiables;
- (id)queue;
- (id)registrar;
- (void)setPrunedIdentifiables:(id)arg1;
- (bool)shouldHandleDeletions;
- (id)streamId;
- (void)willPruneEvent:(id)arg1;

@end
