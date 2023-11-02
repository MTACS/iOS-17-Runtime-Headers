
@interface CNChangeHistoryAddContactEvent : CNChangeHistoryEvent {
    CNContact * _contact;
    NSString * _contactIdentifier;
    NSString * _containerIdentifier;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *containerIdentifier;

+ (unsigned long long)instanceSortOrder;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)contact;
- (id)contactIdentifier;
- (id)contactIdentifiers;
- (id)containerIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 contactIdentifier:(id)arg2 containerIdentifier:(id)arg3;
- (id)initWithContact:(id)arg1 containerIdentifier:(id)arg2;
- (id)initWithContactIdentifier:(id)arg1 containerIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setContact:(id)arg1;

@end
