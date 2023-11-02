
@interface NWCandidatePathMonitor : NSObject {
    NSMutableDictionary * _candidatePathEvaluators;
    NSObject<OS_nw_path_evaluator> * _primaryEvaluator;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _remoteEndpoints;
    id /* block */  _updateHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
}

@property (nonatomic, retain) NSMutableDictionary *candidatePathEvaluators;
@property (nonatomic, readonly) NSArray *candidatePaths;
@property (nonatomic, readonly) NSArray *interfaces;
@property (nonatomic, readonly) NWParameters *parameters;
@property (nonatomic, retain) NSObject<OS_nw_path_evaluator> *primaryEvaluator;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSArray *remoteEndpoints;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (id)cParameters;
- (void)cancelCandidatePathEvaluators;
- (void)cancelWithHandler:(id /* block */)arg1;
- (id)candidatePathEvaluators;
- (id)candidatePaths;
- (void)dealloc;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (id)interfaces;
- (id)interfacesLocked;
- (id)parameters;
- (id)primaryEvaluator;
- (id)queue;
- (id)remoteEndpoints;
- (void)resetCandidatePathEvaluators;
- (void)setCandidatePathEvaluators:(id)arg1;
- (void)setPrimaryEvaluator:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteEndpoints:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)startWithQueue:(id)arg1 updateHandler:(id /* block */)arg2;
- (id /* block */)updateHandler;
- (void)updateRemoteEndpoints:(id)arg1;

@end
