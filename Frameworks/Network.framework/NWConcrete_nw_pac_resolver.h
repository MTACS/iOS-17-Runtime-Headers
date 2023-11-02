
@interface NWConcrete_nw_pac_resolver : NSObject <OS_nw_pac_resolver> {
    struct __CFData { } * auditToken;
    struct __CFString { } * bundleIdentifier;
    NSObject<OS_nw_context> * context;
    struct __CFURL { } * endpointURL;
    unsigned int  https_is_opaque;
    unsigned int  is_dry_run;
    BOOL  logging_id_str;
    struct __CFRunLoopSource { } * pacResolver;
    struct __CFString { } * pacScript;
    struct __CFURL { } * pacURL;
    id /* block */  result_block;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  runloopLock;
    unsigned int  should_trust_invalid_certs;
    struct __CFRunLoopTimer { } * timeoutTimer;
    unsigned int  use_tls;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
