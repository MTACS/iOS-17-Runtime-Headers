
@interface MFContactsManager : NSObject {
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

+ (bool)isAuthorizedToUseContacts;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)contactStore;
- (id)init;
- (id)initWithContactStore:(id)arg1;

@end
