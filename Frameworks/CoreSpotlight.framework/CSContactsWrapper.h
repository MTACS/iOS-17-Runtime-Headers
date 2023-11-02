
@interface CSContactsWrapper : NSObject

@property (nonatomic, readonly) NSString *CNContactEmailAddressesKeyString;
@property (nonatomic, readonly) Class CNContactPropertyClass;

+ (Class)CNContactClass;
+ (Class)CNContactFetchRequestClass;
+ (Class)CNContactFormatterClass;
+ (id)CNContactNicknameKey;
+ (Class)CNContactStoreClass;
+ (id)sharedInstance;

- (id)CNContactEmailAddressesKeyString;
- (Class)CNContactPropertyClass;

@end
