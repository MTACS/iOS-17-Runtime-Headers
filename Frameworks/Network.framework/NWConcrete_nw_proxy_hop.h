
@interface NWConcrete_nw_proxy_hop : NSObject <OS_nw_proxy_hop> {
    struct __CFArray { } * client_certificates;
    struct __CFData { } * client_identity_persistent_reference;
    unsigned int  enable_multipath;
    NSObject<OS_nw_endpoint> * endpoint;
    NSObject<OS_nw_endpoint> * fallback_endpoint;
    unsigned int  fallback_only;
    NSObject<OS_nw_protocol_options> * options;
    struct __CFArray { } * raw_public_keys;
    unsigned char  resumable_session_agent;
    unsigned int  supports_l4s;
    unsigned int  supports_raw_ip;
    unsigned int  supports_resumption;
    NSObject<OS_nw_protocol_options> * tls_options;
    unsigned int  trust_certs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
