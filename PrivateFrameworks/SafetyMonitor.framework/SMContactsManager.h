
@interface SMContactsManager : NSObject

+ (id)shared;

- (id)activeSessionRecipientContactFor:(id)arg1;
- (id)contactWith:(id)arg1;
- (id)fetchAdditionalInfoFor:(id)arg1 keysToFetch:(id)arg2;
- (id)fetchSelfContact;

@end
