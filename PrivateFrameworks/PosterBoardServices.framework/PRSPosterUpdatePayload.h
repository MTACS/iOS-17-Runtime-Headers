
@interface PRSPosterUpdatePayload : NSObject <NSCopying, NSSecureCoding>

+ (id)nullPayload;
+ (bool)supportsSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rawValue;

@end
