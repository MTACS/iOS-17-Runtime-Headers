
@interface NSFileProviderDomainVersion : NSObject <NSSecureCoding> {
    long long  _version;
}

@property (nonatomic, readonly) long long version;

+ (id)domainVersionWithVersion:(long long)arg1;
+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)next;
- (long long)version;

@end
