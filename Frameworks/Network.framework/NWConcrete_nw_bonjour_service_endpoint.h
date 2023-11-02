
@interface NWConcrete_nw_bonjour_service_endpoint : NWConcrete_nw_endpoint <OS_nw_bonjour_service_endpoint> {
    char * service_composite;
    char * service_domain;
    char * service_name;
    char * service_type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription:(bool)arg1;
- (void)dealloc;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;
- (unsigned int)type;

@end
