
@interface CNChangeHistoryAddSubgroupToGroupEvent : CNChangeHistoryEvent {
    CNGroup * _group;
    CNGroup * _subgroup;
}

@property (nonatomic, readonly) CNGroup *group;
@property (nonatomic, readonly) CNGroup *subgroup;

+ (unsigned long long)instanceSortOrder;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubgroup:(id)arg1 group:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)subgroup;

@end
