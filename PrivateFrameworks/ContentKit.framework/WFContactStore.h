
@interface WFContactStore : NSObject

+ (id)new;
+ (Class)preferredConcreteSubclass;

- (bool)addContact:(id)arg1 error:(id*)arg2;
- (id)allContactsWithSortOrder:(long long)arg1;
- (id)allContactsWithSortOrder:(long long)arg1 passingTest:(id /* block */)arg2;
- (id)contactWithIdentifier:(id)arg1;
- (id)contactsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)contactsWithName:(id)arg1;
- (id)firstContactWithEmailAddress:(id)arg1;
- (id)firstContactWithPhoneNumber:(id)arg1;
- (id)init;

@end
