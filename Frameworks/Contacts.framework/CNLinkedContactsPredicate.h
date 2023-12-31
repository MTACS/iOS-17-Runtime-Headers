
@interface CNLinkedContactsPredicate : CNPredicate <CNSuggestedContactPredicate> {
    CNContact * _contact;
    NSString * _contactIdentifier;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)contactIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;

@end
