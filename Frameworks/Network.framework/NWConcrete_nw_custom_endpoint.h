
@interface NWConcrete_nw_custom_endpoint : NWConcrete_nw_endpoint <OS_nw_custom_endpoint> {
    NSObject<OS_dispatch_data> * data;
    id /* block */  resolver_block;
    unsigned int  type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription:(bool)arg1;
- (unsigned long long)getHash;
- (bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;
- (unsigned int)type;

@end
