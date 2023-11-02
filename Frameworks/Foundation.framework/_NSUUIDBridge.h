
@interface _NSUUIDBridge : NSUUID <NSCopying, NSSecureCoding>

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char)arg1;
- (id)initWithUUIDString:(id)arg1;

@end
