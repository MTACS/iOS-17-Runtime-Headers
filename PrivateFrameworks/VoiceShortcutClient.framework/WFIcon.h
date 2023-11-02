
@interface WFIcon : NSObject <NSSecureCoding>

@property (nonatomic, readonly) bool hasClearBackground;
@property (nonatomic, readonly) bool hasTransparentBackground;

+ (bool)supportsSecureCoding;

- (id)_init;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasClearBackground;
- (bool)hasTransparentBackground;
- (id)initWithCoder:(id)arg1;

@end
