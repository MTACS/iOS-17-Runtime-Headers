
@interface CNChangeHistoryPreferredContactForImageEvent : CNChangeHistoryEvent {
    CNContact * _preferredContact;
    CNContact * _unifiedContact;
}

@property (nonatomic, readonly) CNContact *preferredContact;
@property (nonatomic, readonly) CNContact *unifiedContact;

+ (unsigned long long)instanceSortOrder;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreferredContact:(id)arg1 unifiedContact:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)preferredContact;
- (id)unifiedContact;

@end
