
@interface NWConcrete_nw_candidate : NSObject <OS_nw_candidate> {
    NSObject<OS_nw_path> * current_path;
    NSObject<OS_nw_endpoint> * destination;
    NSObject<OS_nw_interface_option_details> * details;
    unsigned int  evaluating;
    NSObject<OS_nw_path_evaluator> * evaluator;
    unsigned int  ids;
    NSObject<OS_nw_interface> * interface;
    NSObject<OS_dispatch_data> * local_cid;
    NWConcrete_nw_candidate_manager * manager;
    unsigned int  original;
    BOOL  priority;
    NSObject<OS_dispatch_data> * remote_cid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)handleNewPath:(id)arg1;
- (id)initCandidate:(id)arg1 forManager:(id)arg2 interface:(id)arg3 priority:(BOOL)arg4 localCID:(id)arg5 remoteCID:(id)arg6 evaluator:(id)arg7;
- (bool)isEligible;
- (void)startEvaluator;

@end
