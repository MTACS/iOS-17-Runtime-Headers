
@interface FPDAccessRight : NSObject {
    unsigned long long  _accessLevel;
    FPDExtension * _provider;
}

@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic, readonly) FPDExtension *provider;

- (void).cxx_destruct;
- (void)_computeAccessForURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3;
- (id)init;
- (id)initWithURL:(id)arg1 connection:(id)arg2 manager:(id)arg3;
- (id)initWithURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3 manager:(id)arg4;
- (unsigned long long)level;
- (id)provider;

@end
