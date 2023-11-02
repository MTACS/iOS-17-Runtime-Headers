
@interface LNRelevantContext : NSObject <NSCopying, NSSecureCoding>

@property (readonly) NSString *analyticsDescription;
@property (nonatomic, readonly, copy) NSArray *conditions;

+ (bool)supportsSecureCoding;

- (id)_init;
- (id)analyticsDescription;
- (id)asCondition;
- (id)asCondition;
- (id)conditions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
