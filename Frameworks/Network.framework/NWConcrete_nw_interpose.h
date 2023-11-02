
@interface NWConcrete_nw_interpose : NSObject <OS_nw_interpose> {
    NSObject<OS_dispatch_queue> * client_queue;
    unsigned char  client_uuid;
    NSObject<OS_nw_context> * context;
    int  delegated_pid;
    int  delegated_upid;
    NSObject<OS_nw_path_evaluator> * evaluator;
    id /* block */  flow_event_handler;
    NSObject<OS_nw_dictionary> * flows;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
