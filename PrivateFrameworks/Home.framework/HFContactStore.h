
@interface HFContactStore : NSObject {
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) CNContactStore *backingStore;
@property (nonatomic, readonly) CNContactStore *contactStore;

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)_fallbackContactWithEmailAddress:(id)arg1 phoneNumber:(id)arg2;
- (id)_meContactWithEmailAddress:(id)arg1 keys:(id)arg2;
- (id)backingStore;
- (id)contactForEmailAddress:(id)arg1 withKeys:(id)arg2;
- (id)contactForPhoneNumber:(id)arg1 withKeys:(id)arg2;
- (id)contactForUserHandle:(id)arg1 withKeys:(id)arg2;
- (id)contactStore;
- (id)init;

@end
