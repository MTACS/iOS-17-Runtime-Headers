
@interface CNChangeHistoryAddMemberToGroupEvent : CNChangeHistoryEvent {
    CNGroup * _group;
    CNContact * _member;
}

@property (nonatomic, readonly) CNGroup *group;
@property (nonatomic, readonly) CNContact *member;

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
- (id)initWithMember:(id)arg1 group:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)member;

@end
