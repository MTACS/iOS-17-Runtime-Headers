
@interface CNChangeHistoryUnlinkContactEvent : CNChangeHistoryEvent {
    CNContact * _contact;
}

@property (nonatomic, readonly) CNContact *contact;

+ (unsigned long long)instanceSortOrder;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)contact;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
