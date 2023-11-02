
@interface HKQuerySortConstraint : NSObject <NSCopying, NSSecureCoding> {
    NSComparisonPredicate * _predicate;
    NSSortDescriptor * _sortDescriptor;
}

@property (nonatomic, readonly, copy) NSComparisonPredicate *predicate;
@property (nonatomic, readonly, copy) NSSortDescriptor *sortDescriptor;

+ (id)sortConstraintByRelaxingSortConstraint:(id)arg1 error:(id*)arg2;
+ (id)sortConstraintWithSortDescriptor:(id)arg1 predicate:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canRelax;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSortDescriptor:(id)arg1 predicate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (id)sortDescriptor;

@end
