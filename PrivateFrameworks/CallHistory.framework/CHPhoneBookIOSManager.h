
@interface CHPhoneBookIOSManager : NSObject {
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)contactStore;
- (id)fetchCNContact:(id)arg1 countryCode:(id)arg2 isEmail:(bool)arg3;
- (id)fetchCNContactsMatchingPredicate:(id)arg1 keysToKetch:(id)arg2 error:(id*)arg3;
- (id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(bool)arg2;
- (id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(bool)arg3;
- (id)getPersonsNameForContact:(id)arg1;
- (id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(bool)arg3;
- (id)initWithContactStore:(id)arg1;

@end
