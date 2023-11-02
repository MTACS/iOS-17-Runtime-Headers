
@interface TRITaskCapabilityModifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _add;
    unsigned long long  _remove;
}

@property (nonatomic, readonly) unsigned long long add;
@property (nonatomic, readonly) unsigned long long remove;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)add;
- (id)asPersistedModifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAdd:(unsigned long long)arg1 remove:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToModifier:(id)arg1;
- (unsigned long long)remove;
- (id)serialize;
- (unsigned long long)updateCapability:(unsigned long long)arg1;

@end
