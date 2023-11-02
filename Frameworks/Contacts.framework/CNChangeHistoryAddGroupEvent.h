
@interface CNChangeHistoryAddGroupEvent : CNChangeHistoryEvent {
    NSString * _containerIdentifier;
    CNGroup * _group;
}

@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) CNGroup *group;

+ (unsigned long long)instanceSortOrder;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)containerIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroup:(id)arg1 containerIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
