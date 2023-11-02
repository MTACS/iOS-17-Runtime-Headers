
@interface NWConcrete_nw_agent_client : NSObject <OS_nw_agent_client> {
    NSObject<OS_nw_advertise_descriptor> * advertise_descriptor;
    NSObject<OS_nw_browse_descriptor> * browse_descriptor;
    NSObject<OS_nw_channel> * channel;
    unsigned char  client_uuid;
    NSObject<OS_nw_endpoint> * endpoint;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * framer_protocol;
    NSObject<OS_nw_group_descriptor> * group_descriptor;
    BOOL  log_string;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_path> * path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMessage:(char *)arg1 agent:(id)arg2 context:(id)arg3;

@end
