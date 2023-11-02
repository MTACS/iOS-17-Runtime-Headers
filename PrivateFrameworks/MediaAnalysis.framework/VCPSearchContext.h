
@interface VCPSearchContext : NSObject <NSSecureCoding> {
    NSMutableDictionary * _entities;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addIdentifiers:(id)arg1 forType:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntities:(id)arg1;
- (void)setIdentifiers:(id)arg1 forType:(long long)arg2;

@end
