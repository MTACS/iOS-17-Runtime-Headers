
@interface CNContactVerifier : NSObject

+ (bool)arePropertiesOfContact:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id*)arg3;
+ (bool)isValidContact:(id)arg1 error:(id*)arg2;
+ (id)os_log;

@end
