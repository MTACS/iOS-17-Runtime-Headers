
@interface NWConcrete_nw_address_endpoint : NWConcrete_nw_endpoint <OS_nw_address_endpoint> {
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  address;
    unsigned int  calculated_hostname;
    NSObject<OS_dispatch_data> * ech_config;
    struct ether_addr { 
        unsigned char octet[6]; 
    }  ethernet_address;
    char * hostname;
    int  original_fd;
    unsigned short  priority;
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
- (id)echConfig;
- (unsigned long long)getHash;
- (const char *)hostname;
- (bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;
- (unsigned short)port;
- (unsigned short)priority;
- (void)setEchConfig:(id)arg1;
- (void)setPriority:(unsigned short)arg1;
- (unsigned int)type;

@end
