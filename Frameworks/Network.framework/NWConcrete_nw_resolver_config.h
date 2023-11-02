
@interface NWConcrete_nw_resolver_config : NSObject <OS_nw_resolver_config> {
    struct retained_ptr<NSObject<OS_nw_fd_wrapper> *> { 
        NSObject<OS_nw_fd_wrapper> *m_obj; 
    }  agent_fd;
    struct retained_ptr<NSObject<OS_xpc_object> *> { 
        NSObject<OS_xpc_object> *m_obj; 
    }  dictionary;
    unsigned int  generation;
    unsigned char  identifier;
    struct retained_ptr<NSObject<OS_dispatch_source> *> { 
        NSObject<OS_dispatch_source> *m_obj; 
    }  kernel_event_source;
    struct retained_ptr<NSObject<OS_nw_fd_wrapper> *> { 
        NSObject<OS_nw_fd_wrapper> *m_obj; 
    }  kernel_event_wrapper;
    struct unfair_mutex { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } m_mutex; 
    }  lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
