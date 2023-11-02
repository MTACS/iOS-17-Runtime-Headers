
@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint> {
    unsigned char  agent_identifier;
    unsigned short  alternate_port;
    struct { 
        struct nw_endpoint_alterative_s {} *tqh_first; 
        struct nw_endpoint_alterative_s {} **tqh_last; 
    }  alternative_list;
    unsigned int  approved_app_domain;
    struct nw_hash_table { } * associations;
    unsigned int  can_block_request;
    NSObject<OS_nw_array> * cname_array;
    NSObject<OS_nw_context> * context;
    char * description;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  description_lock;
    unsigned int  description_used;
    char * device_id;
    unsigned int  do_not_redact_description;
    NSObject<OS_nw_array> * endpoint_edges;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  endpoint_lock;
    struct nw_endpoint_alterative_s { 
        struct { 
            struct nw_endpoint_alterative_s {} *tqe_next; 
            struct nw_endpoint_alterative_s {} **tqe_prev; 
        } chain; 
        NWConcrete_nw_endpoint *endpoint; 
        NSObject<OS_nw_protocol_definition> *applicable_protocol; 
    }  first_alternative;
    NSObject<OS_nw_interface> * interface;
    int  interface_type;
    unsigned int  is_local_domain;
    unsigned int  is_registered;
    char * known_tracker_name;
    NSString * ns_description;
    NSString * ns_redacted_description;
    NWConcrete_nw_endpoint * parent_endpoint;
    unsigned int  parent_is_proxy;
    NSArray * public_keys;
    char * redacted_description;
    unsigned int  redacted_description_used;
    NSObject<OS_nw_protocol_instance_registrar> * registrar;
    unsigned char  selected_key;
    NSObject<OS_xpc_object> * signature;
    char * tracker_owner;
    NSObject<OS_nw_txt_record> * txt_record;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) const char *domainForPolicy;
@property (nonatomic, retain) NSObject<OS_dispatch_data> *echConfig;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const char *hostname;
@property (nonatomic, readonly) unsigned short port;
@property (nonatomic) unsigned short priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic) unsigned short weight;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyDictionary;
- (id)copyEndpoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (char *)createDescription:(bool)arg1;
- (void)dealloc;
- (id)description;
- (const char *)domainForPolicy;
- (id)echConfig;
- (unsigned long long)getHash;
- (unsigned long long)hash;
- (const char *)hostname;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;
- (unsigned short)port;
- (unsigned short)priority;
- (id)redactedDescription;
- (void)setEchConfig:(id)arg1;
- (void)setPriority:(unsigned short)arg1;
- (void)setWeight:(unsigned short)arg1;
- (unsigned int)type;
- (unsigned short)weight;

@end
