
@interface NWConcrete_nw_path_observer : NSObject <OS_nw_path_observer> {
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_fd_wrapper> * fd;
    NSObject<OS_nw_dictionary> * known_paths;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    void * source;
    id /* block */  update_block;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
