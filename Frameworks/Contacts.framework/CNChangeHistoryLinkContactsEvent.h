
@interface CNChangeHistoryLinkContactsEvent : CNChangeHistoryEvent {
    CNContact * _fromContact;
    CNContact * _toContact;
    CNContact * _unifiedContact;
}

@property (nonatomic, readonly) CNContact *fromContact;
@property (nonatomic, readonly) CNContact *toContact;
@property (nonatomic, readonly) CNContact *unifiedContact;

+ (unsigned long long)instanceSortOrder;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fromContact;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFromContact:(id)arg1 toContact:(id)arg2 unifiedContact:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)toContact;
- (id)unifiedContact;

@end
