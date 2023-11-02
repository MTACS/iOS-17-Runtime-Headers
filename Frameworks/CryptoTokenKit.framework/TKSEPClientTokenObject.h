
@interface TKSEPClientTokenObject : TKClientTokenObject {
    TKSEPKey * _key;
}

@property (nonatomic, readonly) TKSEPKey *key;

- (void).cxx_destruct;
- (bool)deleteWithError:(id*)arg1;
- (id)initWithSession:(id)arg1 key:(id)arg2 error:(id*)arg3;
- (id)key;
- (id)operation:(long long)arg1 data:(id)arg2 algorithms:(id)arg3 parameters:(id)arg4 error:(id*)arg5;
- (id)withError:(id*)arg1 invoke:(id /* block */)arg2;

@end
