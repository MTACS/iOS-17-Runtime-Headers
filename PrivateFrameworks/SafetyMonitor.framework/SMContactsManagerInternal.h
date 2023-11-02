
@interface SMContactsManagerInternal : NSObject {
    void keystoFetch;
    void store;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)activeSessionRecipientContactFor:(id)arg1;
- (id)contactWith:(id)arg1;
- (id)fetchAdditionalInfoFor:(id)arg1 keysToFetch:(id)arg2;
- (id)fetchSelfContact;
- (id)init;

@end
