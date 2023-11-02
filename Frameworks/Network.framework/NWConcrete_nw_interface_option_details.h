
@interface NWConcrete_nw_interface_option_details : NSObject <OS_nw_interface_option_details> {
    NSObject<OS_dispatch_data> * initial_data;
    NWConcrete_nw_interface * interface;
    NSObject<OS_dispatch_data> * local_cid;
    unsigned char  nexus_agent;
    BOOL  priority;
    NSObject<OS_dispatch_data> * remote_cid;
    NSObject<OS_nw_endpoint> * remote_endpoint;
    int  sockfd;
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
