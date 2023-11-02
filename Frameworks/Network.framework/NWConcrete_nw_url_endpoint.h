
@interface NWConcrete_nw_url_endpoint : NWConcrete_nw_endpoint <OS_nw_url_endpoint> {
    unsigned int  __pad_bits;
    char * hostname;
    unsigned int  inferred_port;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    char * path;
    unsigned short  port;
    char * sanitized_url;
    char * scheme;
    char * url;
    BOOL  url_hash;
    struct __CFURL { } * url_ref;
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
- (const char *)hostname;
- (bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;
- (unsigned short)port;
- (unsigned int)type;

@end
