
@interface CNChangeHistoryDifferentMeCardEvent : CNChangeHistoryEvent {
    NSString * _contactIdentifier;
}

@property (nonatomic, readonly) NSString *contactIdentifier;

+ (unsigned long long)instanceSortOrder;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)contactIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
