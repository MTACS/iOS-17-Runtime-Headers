
@interface CRKASMCredentialStoreFactory : NSObject

+ (id)instructorCredentialStore;
+ (id)instructorCredentialStoreWithoutKeychain;
+ (id)makeCredentialStoreWithRole:(id)arg1 keychainOverride:(id)arg2;
+ (id)makeInstructorCredentialStoreWithKeychainOverride:(id)arg1;
+ (id)storageKeyWithRole:(id)arg1 suffix:(id)arg2;
+ (id)studentCredentialStore;

@end
