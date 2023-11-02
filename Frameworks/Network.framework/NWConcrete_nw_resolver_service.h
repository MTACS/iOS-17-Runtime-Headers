
@interface NWConcrete_nw_resolver_service : NSObject <OS_nw_resolver_service> {
    NSObject<OS_nw_endpoint> * alternative_origin;
    NSObject<OS_dispatch_data> * ech_config;
    unsigned short  flags;
    NSObject<OS_dnssd_getaddrinfo> * gai;
    unsigned int  host_matches_origin;
    unsigned short  port;
    unsigned int  port_matches_origin;
    unsigned short  priority;
    unsigned int  sensitive_redacted;
    NSObject<OS_nw_endpoint> * service_host;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;

@end
