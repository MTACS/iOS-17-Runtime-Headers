
@interface NWConcrete_nw_host_endpoint : NWConcrete_nw_endpoint <OS_nw_host_endpoint> {
    NSObject<OS_dispatch_data> * ech_config;
    char * hostname;
    unsigned short  port;
    unsigned short  priority;
    unsigned short  weight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription:(bool)arg1;
- (void)dealloc;
- (const char *)domainForPolicy;
- (id)echConfig;
- (unsigned long long)getHash;
- (const char *)hostname;
- (bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;
- (unsigned short)port;
- (unsigned short)priority;
- (void)setEchConfig:(id)arg1;
- (void)setPriority:(unsigned short)arg1;
- (void)setWeight:(unsigned short)arg1;
- (unsigned int)type;
- (unsigned short)weight;

@end
