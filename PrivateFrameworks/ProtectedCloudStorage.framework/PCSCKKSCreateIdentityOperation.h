
@interface PCSCKKSCreateIdentityOperation : PCSCKKSOperation {
    PCSCKKSItemModifyContext * _context;
}

@property (retain) PCSCKKSItemModifyContext *context;

- (void).cxx_destruct;
- (int)addAndNotifyOnSync:(struct _PCSIdentityData { }*)arg1 attributes:(struct __CFDictionary { }*)arg2 returnAttributes:(const struct __CFDictionary {}**)arg3 complete:(id /* block */)arg4;
- (id)context;
- (void)createPCSIdentity;
- (id)initWithItemModifyContext:(id)arg1;
- (void)itemStored:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setIdentityToCurrent;
- (void)start;
- (void)storePCSIdentity:(struct _PCSIdentityData { }*)arg1;

@end
