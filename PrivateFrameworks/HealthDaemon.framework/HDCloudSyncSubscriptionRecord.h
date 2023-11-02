
@interface HDCloudSyncSubscriptionRecord : HDCloudSyncRecord

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isSubscriptionRecord:(id)arg1;
+ (id)recordForZoneID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordIDsWithZoneID:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;

- (id)description;
- (id)printDescription;

@end
