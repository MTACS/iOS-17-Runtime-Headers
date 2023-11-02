
@interface NWConcrete_nw_protocol_instance_registrar : NSObject <OS_nw_protocol_instance_registrar> {
    struct nw_protocol_identifier { 
        BOOL name[32]; 
        int level; 
        int mapping; 
    }  identifier;
    unsigned long long  instance_count;
    struct nw_protocol_entry_list { 
        struct nw_protocol_entry {} *lh_first; 
    }  instances;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)redactedDescription;

@end
