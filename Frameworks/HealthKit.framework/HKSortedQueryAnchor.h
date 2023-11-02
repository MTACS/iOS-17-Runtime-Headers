
@interface HKSortedQueryAnchor : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _objectID;
    NSArray * _sortConstraints;
}

@property (nonatomic, readonly, copy) NSNumber *objectID;
@property (nonatomic, readonly, copy) NSArray *sortConstraints;

+ (id)sortConstraintsWithSortDescriptors:(id)arg1 sample:(id)arg2;
+ (id)sortedQueryAnchorRelaxingConstraintsWithAnchor:(id)arg1 error:(id*)arg2;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)arg1;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)arg1 followingSample:(id)arg2 objectID:(long long)arg3;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)arg1 includingSample:(id)arg2 objectID:(long long)arg3;
+ (id)sortedQueryAnchorWithSortDescriptors:(id)arg1 objectID:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canRelax;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSortConstraints:(id)arg1 objectID:(id)arg2;
- (bool)isCompatibleWithSortDescriptors:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectID;
- (id)predicate;
- (id)querySortDescriptors;
- (id)sortConstraints;

@end
