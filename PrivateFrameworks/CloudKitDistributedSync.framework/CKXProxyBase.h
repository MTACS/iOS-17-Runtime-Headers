
@interface CKXProxyBase : NSObject {
    CKXBackingStore * _backingStore;
    bool  _committed;
    long long  _scope;
}

@property (nonatomic, readonly) CKXBackingStore *backingStore;
@property (nonatomic, readonly) bool committed;
@property (nonatomic) long long scope;

- (void).cxx_destruct;
- (void)associateWithBackingStore:(id)arg1;
- (id)backingStore;
- (void)commit;
- (bool)committed;
- (id)initInternal;
- (bool)isMutable;
- (void)reset;
- (long long)scope;
- (void)setScope:(long long)arg1;

@end
