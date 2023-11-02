
@interface NWConcrete_nw_application_service_endpoint : NWConcrete_nw_endpoint <OS_nw_application_service_endpoint> {
    char * alias;
    char * application_service;
    char * contact_id;
    char * device_model;
    char * device_name;
    unsigned char  service_identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription:(bool)arg1;
- (void)dealloc;
- (unsigned long long)getHash;
- (bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;
- (unsigned int)type;

@end
