
@interface NWConcrete_nw_browse_descriptor : NSObject <OS_nw_browse_descriptor> {
    unsigned int  __pad_bits;
    char * application_service_name;
    char * bonjour_domain;
    char * bonjour_type;
    id /* block */  browse_block;
    char * bundle_id;
    NSObject<OS_dispatch_data> * custom_data;
    char * description;
    NSObject<OS_nw_array> * device_filters;
    unsigned int  device_types;
    unsigned int  discover_application_service_endpoints_only;
    unsigned int  include_txt_record;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    char * logging_description;
    unsigned int  scope;
    unsigned int  sign_results;
    int  type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)redactedDescription;

@end
