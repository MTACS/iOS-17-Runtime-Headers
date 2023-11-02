
@interface NWConcrete_nw_hsts_storage : NSObject <OS_nw_hsts_storage> {
    _NSHSTSStorage * HSTSStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end
