
@interface FPFlattenedPackageSandboxingURLWrapper : FPSandboxingURLWrapper {
    FPSandboxingURLWrapper * _packageWrapper;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 packageURL:(id)arg2 error:(id*)arg3;

@end
