
@interface SparseBundleBackendXPC : BackendXPC

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (struct shared_ptr<Backend> { struct Backend {} *x1; struct __shared_weak_count {} *x2; })getCryptoHeaderBackend;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 fileOpenFlags:(int)arg2;
- (id)initWithURL:(id)arg1 fileOpenFlags:(int)arg2 bandSize:(unsigned long long)arg3;
- (bool)isUnlocked;
- (id)newWithCryptoFormat:(const void*)arg1;
- (void)replaceWithBackendXPC:(id)arg1;

@end
