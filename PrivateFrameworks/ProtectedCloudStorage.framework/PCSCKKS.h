
@interface PCSCKKS : NSObject {
    NSString * _dsid;
    struct _PCSIdentitySetData { } * _set;
}

@property (retain) NSString *dsid;
@property struct _PCSIdentitySetData { }*set;

+ (bool)fetchWithTimeout:(unsigned long long)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)createIdentity:(id)arg1 complete:(id /* block */)arg2;
- (id)createIdentityOperation:(id)arg1;
- (void)createNewIdentity:(id)arg1 roll:(bool)arg2 sync:(bool)arg3 forceSync:(bool)arg4 complete:(id /* block */)arg5;
- (void)dealloc;
- (id)dsid;
- (id)ensurePCSFieldsOperation:(id)arg1;
- (id)fetchCurrentOperation:(id)arg1;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData { }*)arg1 dsid:(id)arg2;
- (struct _PCSIdentitySetData { }*)set;
- (void)setDsid:(id)arg1;
- (void)setSet:(struct _PCSIdentitySetData { }*)arg1;
- (bool)shouldRetryWithSync:(id)arg1;
- (id)stripOperationErrorIfPCSError:(id)arg1;
- (void)submitRequest:(id)arg1 complete:(id /* block */)arg2;
- (id)syncViewOperation:(id)arg1;

@end
