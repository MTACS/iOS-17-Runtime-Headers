
@interface CTCATargetVisibility : NSObject <NSCopying, NSSecureCoding> {
    long long  _aggregateVisibility;
}

@property (nonatomic) long long aggregateVisibility;

+ (bool)supportsSecureCoding;

- (long long)aggregateVisibility;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAggregateVisibility:(long long)arg1;

@end
