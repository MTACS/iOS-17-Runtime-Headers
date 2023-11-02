
@interface CNChangeHistoryEvent : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) NSArray *contactIdentifiers;

+ (unsigned long long)instanceSortOrder;
+ (bool)supportsSecureCoding;

- (void)acceptEventVisitor:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)comparisonResultBetweenClasses:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)contactIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
