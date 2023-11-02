
@interface _CDHomeManagerUtilities : NSObject <HMHomeManagerDelegate> {
    CNContactStore * _contactStore;
    HMHomeManager * _homeManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)contactKeysToFetch;
- (id)contactsInHome;
- (id)init;

@end
