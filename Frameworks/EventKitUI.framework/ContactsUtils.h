
@interface ContactsUtils : NSObject

+ (id)contactForAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)contactForAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 keysToFetch:(id)arg5;
+ (id)contactForContact:(id)arg1 keysToFetch:(id)arg2;
+ (id)contactForEmailAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 keysToFetch:(id)arg5;
+ (id)contactForPhoneNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 keysToFetch:(id)arg5;
+ (id)defaultContactKeysToFetch;

@end
