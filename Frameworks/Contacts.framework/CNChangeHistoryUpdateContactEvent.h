
@interface CNChangeHistoryUpdateContactEvent : CNChangeHistoryEvent {
    CNContact * _contact;
    NSString * _contactIdentifier;
    bool  _imagesChanged;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) bool imagesChanged;

+ (unsigned long long)instanceSortOrder;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)contact;
- (id)contactIdentifier;
- (id)contactIdentifiers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)imagesChanged;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 contactIdentifier:(id)arg2 imagesChanged:(bool)arg3;
- (id)initWithContact:(id)arg1 imagesChanged:(bool)arg2;
- (id)initWithContactIdentifier:(id)arg1 imagesChanged:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (void)setContact:(id)arg1;

@end
