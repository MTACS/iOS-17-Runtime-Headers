
@interface NWConcrete_nw_path_override_info : NSObject <OS_nw_path_override_info> {
    unsigned long long  override_flags;
    NSObject<OS_nw_array> * resolver_configs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
