
@interface NWConcrete_nw_group_descriptor : NSObject <OS_nw_group_descriptor> {
    unsigned int  __pad_bits;
    unsigned int  disable_unicast_traffic;
    unsigned char  group_id;
    NSObject<OS_nw_array> * members;
    NSObject<OS_nw_endpoint> * specific_source;
    int  type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithType:(int)arg1 member:(id)arg2 groupID:(unsigned char)arg3;

@end
