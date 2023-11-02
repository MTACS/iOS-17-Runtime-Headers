
@interface SGContactStoreFactory : NSObject

+ (id)contactStore;
+ (id)contactStoreWithDonatedContacts;
+ (void)useMockContactStore:(id)arg1;

@end
