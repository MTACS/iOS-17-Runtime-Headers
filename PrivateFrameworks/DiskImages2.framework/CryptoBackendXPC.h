
@interface CryptoBackendXPC : BackendXPC {
    BackendXPC * _baseBackendXPC;
}

@property (nonatomic, readonly) BackendXPC *baseBackendXPC;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baseBackendXPC;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(const void*)arg1 baseBackendXPC:(id)arg2;
- (bool)isUnlocked;
- (void)replaceWithBackendXPC:(id)arg1;

@end
