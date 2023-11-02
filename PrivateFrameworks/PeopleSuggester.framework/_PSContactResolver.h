
@interface _PSContactResolver : NSObject {
    CNContactStore * _contactStore;
    NSArray * _keysToFetch;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) NSArray *keysToFetch;

+ (id)handlesForContactFavorites;
+ (id)normalizedHandlesDictionaryFromHandles:(id)arg1;

- (void).cxx_destruct;
- (id)allEmailAndPhoneNumberHandlesForContact:(id)arg1;
- (id)contactStore;
- (id)contactWithIdentifier:(id)arg1;
- (id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2;
- (id)keysToFetch;
- (id)resolveContact:(id)arg1;
- (id)resolveContactFromINPerson:(id)arg1;
- (id)resolveContactIdentifier:(id)arg1;
- (id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1;
- (id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1 pickFirstOfMultiple:(bool)arg2;

@end
