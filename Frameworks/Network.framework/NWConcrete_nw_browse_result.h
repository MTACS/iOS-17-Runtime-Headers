
@interface NWConcrete_nw_browse_result : NSObject <OS_nw_browse_result> {
    unsigned int  __pad_bits;
    char * description;
    unsigned int  discovered_from_path;
    NSObject<OS_nw_endpoint> * endpoint;
    unsigned int  immutable;
    NSObject<OS_nw_array> * interfaces;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    char * logging_description;
    NSObject<OS_nw_txt_record> * txt_record;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)redactedDescription;

@end
