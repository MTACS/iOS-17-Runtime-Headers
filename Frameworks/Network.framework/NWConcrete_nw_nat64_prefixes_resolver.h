
@interface NWConcrete_nw_nat64_prefixes_resolver : NSObject <OS_nw_nat64_prefixes_resolver> {
    int  address_count;
    id /* block */  cancel_handler;
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_context> * context;
    int  dns_error;
    struct _DNSServiceRef_t { } * dns_service;
    unsigned int  dns_service_id;
    NSObject<OS_nw_path_evaluator> * evaluator;
    unsigned int  ifindex;
    NWConcrete_nw_nat64_prefixes_resolver * internally_retained_object;
    struct in6_addr { union { unsigned char x_1_1_1[16]; unsigned short x_1_1_2[8]; unsigned int x_1_1_3[4]; } x1; } * ipv6_addrs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    NSObject<OS_nw_parameters> * parameters;
    id /* block */  update_handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
