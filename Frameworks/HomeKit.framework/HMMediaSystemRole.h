
@interface HMMediaSystemRole : NSObject <NSSecureCoding> {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)leftRole;
+ (id)rightRole;
+ (bool)roleFromDictionary:(id)arg1 roleOutput:(unsigned long long*)arg2;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRole:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)serialize;
- (unsigned long long)type;

@end
