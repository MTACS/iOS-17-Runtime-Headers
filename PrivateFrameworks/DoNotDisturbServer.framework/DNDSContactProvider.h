
@interface DNDSContactProvider : NSObject <DNDSContactProviding> {
    CNContactStore * _contactStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedContactStore;

- (void).cxx_destruct;
- (id)_bestMatchForContact:(id)arg1 inContacts:(id)arg2;
- (id)contactForContact:(id)arg1;
- (id)init;

@end
