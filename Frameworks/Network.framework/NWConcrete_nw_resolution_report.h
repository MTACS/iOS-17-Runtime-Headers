
@interface NWConcrete_nw_resolution_report : NSObject <OS_nw_resolution_report> {
    unsigned int  endpoint_count;
    unsigned short  extended_dns_error_code;
    char * extended_dns_error_extra_text;
    unsigned long long  milliseconds;
    NSObject<OS_nw_endpoint> * preferred_endpoint;
    int  protocol;
    char * provider_name;
    unsigned int  received_svcb;
    NSObject<OS_nw_array> * resolved_endpoints;
    int  source;
    NSObject<OS_nw_endpoint> * successful_endpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
