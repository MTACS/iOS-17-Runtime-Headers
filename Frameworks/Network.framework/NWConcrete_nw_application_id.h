
@interface NWConcrete_nw_application_id : NSObject <OS_nw_application_id> {
    struct { 
        unsigned int val[8]; 
    }  audit_token;
    char * bundle_id;
    bool  is_bundle_id_external;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    char * originating_process;
    int  pid;
    int  system_service;
    unsigned char  uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)redactedDescription;

@end
