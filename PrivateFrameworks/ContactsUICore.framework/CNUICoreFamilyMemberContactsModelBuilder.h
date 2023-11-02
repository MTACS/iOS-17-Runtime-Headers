
@interface CNUICoreFamilyMemberContactsModelBuilder : NSObject {
    long long  _contactFormatterStyle;
    CNUICoreContactTypeAssessor * _contactTypeAssessor;
    NSArray * _contacts;
    bool  _includeWhitelistedContactsOnly;
    bool  _markItemsAsPersisted;
    bool  _markItemsAsProposed;
    bool  _sortItemsByName;
}

@property (nonatomic) long long contactFormatterStyle;
@property (nonatomic, retain) CNUICoreContactTypeAssessor *contactTypeAssessor;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic) bool includeWhitelistedContactsOnly;
@property (nonatomic) bool markItemsAsPersisted;
@property (nonatomic) bool markItemsAsProposed;
@property (nonatomic) bool sortItemsByName;

+ (id)familyMemberContactItemFromContact:(id)arg1 contactFormatterStyle:(long long)arg2 contactTypeAssessor:(id)arg3 itemHasBeenPersisted:(bool)arg4 itemIsProposed:(bool)arg5;
+ (id)firstDisplayableEmailAddressForContact:(id)arg1;
+ (id)firstDisplayablePhoneNumberForContact:(id)arg1;
+ (id)formattedNameOfContact:(id)arg1 contactFormatterStyle:(long long)arg2;
+ (id)itemsBySortingItems:(id)arg1;
+ (id)placeholderNameForNamelessContact:(id)arg1;
+ (bool)shouldIncludeContact:(id)arg1 givenIncludeWhitelistedContactsOnlySetting:(bool)arg2;
+ (id)uniqueFamilyMemberContactItems:(id)arg1;

- (void).cxx_destruct;
- (id)build;
- (long long)contactFormatterStyle;
- (id)contactTypeAssessor;
- (id)contacts;
- (bool)includeWhitelistedContactsOnly;
- (id)init;
- (bool)markItemsAsPersisted;
- (bool)markItemsAsProposed;
- (void)setContactFormatterStyle:(long long)arg1;
- (void)setContactTypeAssessor:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setIncludeWhitelistedContactsOnly:(bool)arg1;
- (void)setMarkItemsAsPersisted:(bool)arg1;
- (void)setMarkItemsAsProposed:(bool)arg1;
- (void)setSortItemsByName:(bool)arg1;
- (bool)sortItemsByName;
- (id)sortedFamilyMemberContactItems:(id)arg1;

@end
