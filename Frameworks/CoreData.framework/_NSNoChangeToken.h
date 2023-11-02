
@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
