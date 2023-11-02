
@interface CNUICoreContactRefetcher : NSObject {
    <CNUICoreContactStoreFacade> * _contactStore;
    NSArray * _contactsToRefetch;
    NSArray * _keysToFetch;
}

@property (nonatomic, readonly) <CNUICoreContactStoreFacade> *contactStore;
@property (nonatomic, readonly) NSArray *contactsToRefetch;
@property (nonatomic, readonly) NSArray *keysToFetch;

+ (id)contactsByReplacingContacts:(id)arg1 withContactsHavingMatchingIdentifier:(id)arg2;
+ (id)contactsFoundAndNotFoundByPartioningContacts:(id)arg1 usingFoundContacts:(id)arg2;
+ (id)refetchedContacts:(id)arg1 fromStore:(id)arg2 keysToFetch:(id)arg3;

- (void).cxx_destruct;
- (id)allContacts;
- (id)contactStore;
- (id)contactsFoundAndNotFound;
- (id)contactsToRefetch;
- (id)foundContacts;
- (id)init;
- (id)initWithContactStore:(id)arg1 contactsToRefetch:(id)arg2;
- (id)initWithContactStore:(id)arg1 contactsToRefetch:(id)arg2 keysToFetch:(id)arg3;
- (id)keysToFetch;

@end
