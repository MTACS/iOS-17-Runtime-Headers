
@interface HMFFlow : HMFObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
}

@property (readonly, copy) NSUUID *UUID;

+ (id)internalOnlyInitializer;
+ (bool)supportsSecureCoding;
+ (id)untrackedPlaceholderFlow;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
