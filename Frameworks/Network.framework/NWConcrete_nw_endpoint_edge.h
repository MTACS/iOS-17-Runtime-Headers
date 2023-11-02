
@interface NWConcrete_nw_endpoint_edge : NSObject <OS_nw_endpoint_edge> {
    unsigned int  __pad_bits;
    NSObject<OS_nw_endpoint> * endpoint;
    struct nw_protocol_identifier { 
        BOOL name[32]; 
        int level; 
        int mapping; 
    }  identifier;
    char * name;
    unsigned int  wildcard;
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
