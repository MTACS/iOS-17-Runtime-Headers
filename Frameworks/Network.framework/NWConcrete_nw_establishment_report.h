
@interface NWConcrete_nw_establishment_report : NSObject <OS_nw_establishment_report> {
    unsigned int  __pad_bits;
    unsigned long long  attempt_started_after_milliseconds;
    unsigned long long  duration_milliseconds;
    unsigned long long  flow_started_after_milliseconds;
    unsigned int  previous_attempt_count;
    int  privacy_stance;
    NSObject<OS_nw_array> * protocol_reports;
    NSObject<OS_nw_array> * proxied_next_hop_endpoints;
    unsigned int  proxy_configured;
    NSObject<OS_nw_array> * proxy_endpoints;
    NSObject<OS_nw_array> * resolution_reports;
    unsigned long long  resolution_started_after_milliseconds;
    unsigned int  used_proxy;
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
