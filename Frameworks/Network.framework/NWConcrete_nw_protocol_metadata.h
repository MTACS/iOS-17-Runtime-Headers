
@interface NWConcrete_nw_protocol_metadata : NSObject <OS_nw_protocol_metadata> {
    BOOL * data;
    NWConcrete_nw_protocol_definition * definition;
    void * handle;
    unsigned char  identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
