
@interface ABSQLPredicate : NSObject {
    id /* block */  _bindBlock;
    bool  _isNullPredicate;
    id /* block */  _matchInfoProvider;
    NSString * _query;
    id  _storage;
}

@property (nonatomic, copy) id /* block */ bindBlock;
@property (nonatomic) bool isNullPredicate;
@property (nonatomic, copy) id /* block */ matchInfoProvider;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, retain) id storage;

+ (id)_sqlListOfLength:(unsigned long long)arg1;
+ (id)_sqlValuesTableOfLength:(unsigned long long)arg1 columnCount:(unsigned long long)arg2;
+ (id)bindPlaceholderStringOfCount:(unsigned long long)arg1;
+ (id)predicateForAllContacts;
+ (id)predicateForContactsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForContactsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForContactsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 allowedStoreIdentifiers:(id)arg2 sortOrder:(int)arg3;
+ (id)predicateForContactsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 sortOrder:(int)arg2;
+ (id)predicateForContactsMatchingMultivalueProperty:(int)arg1 value:(id)arg2;
+ (id)predicateForContactsMatchingMultivalueProperty:(int)arg1 values:(id)arg2 groupIdentifiers:(id)arg3 containerIdentifiers:(id)arg4 limitToOneResult:(bool)arg5 map:(id)arg6;
+ (id)predicateForContactsMatchingName:(id)arg1 addressBook:(void*)arg2;
+ (id)predicateForContactsMatchingOrganizationName:(id)arg1;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1 country:(id)arg2 homeCountryCode:(id)arg3 prefixHint:(id)arg4 groupIdentifiers:(id)arg5 limitToOneResult:(bool)arg6;
+ (id)predicateForContactsMatchingPhoneNumbers:(id)arg1 containerIdentifiers:(id)arg2 map:(id)arg3;
+ (id)predicateForContactsMatchingPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 containerIdentifiers:(id)arg3 map:(id)arg4;
+ (id)predicateForContactsMatchingPreferredChannel:(id)arg1 limitOne:(bool)arg2;
+ (id)predicateForContactsMatchingText:(id)arg1 tokenizer:(struct __CFStringTokenizer { }*)arg2 collator:(struct UCollator { }*)arg3 matchNameFieldsOnly:(bool)arg4;
+ (id)predicateForContactsMissingBackgroundColors;
+ (id)predicateForContactsWithExternalUUIDs:(id)arg1;
+ (id)predicateForContactsWithLegacyIdentifier:(int)arg1;
+ (id)predicateForContactsWithUUIDs:(id)arg1 ignoreUnifiedIdentifiers:(bool)arg2;
+ (id)predicateForMeContact;
+ (id)predicateForNoContacts;
+ (id)predicateForSingleContactMatchingMultivalueProperty:(int)arg1 value:(id)arg2;
+ (id)predicateUnioningPredicate:(id)arg1 withPredicate:(id)arg2;

- (id /* block */)bindBlock;
- (void)dealloc;
- (bool)isNullPredicate;
- (id /* block */)matchInfoProvider;
- (id)query;
- (void)setBindBlock:(id /* block */)arg1;
- (void)setIsNullPredicate:(bool)arg1;
- (void)setMatchInfoProvider:(id /* block */)arg1;
- (void)setQuery:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;

@end
