
@interface RamXPC : BackendXPC

+ (bool)supportsSecureCoding;

- (void)createRamBackend;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(unsigned long long)arg1;

@end
