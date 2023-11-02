
@interface CNChangeHistoryDeleteContactEvent : CNChangeHistoryEvent {
    NSString * _contactIdentifier;
    NSString * _externalModificationTag;
    NSString * _externalURI;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly, copy) NSString *externalModificationTag;
@property (nonatomic, readonly, copy) NSString *externalURI;

+ (unsigned long long)instanceSortOrder;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)contactIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalModificationTag;
- (id)externalURI;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
