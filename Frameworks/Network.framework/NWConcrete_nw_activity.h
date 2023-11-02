
@interface NWConcrete_nw_activity : NSObject <OS_nw_activity> {
    unsigned int  activated;
    unsigned int  client_metric_count;
    unsigned int  completed;
    int  completion_reason;
    struct description_cache { 
        struct retained_ptr<NSString *> { 
            NSString *m_obj; 
        } description; 
        struct unfair_mutex { 
            struct os_unfair_lock_s { 
                unsigned int _os_unfair_lock_opaque; 
            } m_mutex; 
        } mutex; 
        unsigned char __pad[4]; 
    }  description_cache;
    unsigned int  domain;
    unsigned long long  end_time;
    unsigned int  fragments_quenched;
    unsigned long long  investigation_identifier;
    unsigned int  is_lightweight;
    unsigned int  is_retry;
    unsigned int  label;
    struct unfair_mutex { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } m_mutex; 
    }  lock;
    struct retained_ptr<NWConcrete_nw_activity *> { 
        NWConcrete_nw_activity *m_obj; 
    }  parent;
    int  reporting_strategy;
    unsigned long long  start_time;
    unsigned char  token;
    int  underlying_error_code;
    int  underlying_error_domain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)redactedDescription;

@end
