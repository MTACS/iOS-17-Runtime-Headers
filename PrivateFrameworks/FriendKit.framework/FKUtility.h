
@interface FKUtility : NSObject

+ (id)_nameFormatter;
+ (id)compressPhoneNumberString:(id)arg1;
+ (id)hashFromData:(id)arg1;
+ (id)initialForString:(id)arg1;
+ (id)initialsForPerson:(void*)arg1;
+ (bool)isRomanString:(id)arg1;
+ (bool)personHasLinkages:(void*)arg1;
+ (bool)shouldAllowAddingFriendWithRecordID:(int)arg1 withFriendListManager:(id)arg2 addressBook:(void*)arg3 personValueCache:(id)arg4;

@end
