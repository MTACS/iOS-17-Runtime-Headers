
@interface CKRecordUtilities : NSObject

+ (id)recordIDUsingName:(id)arg1 zoneID:(id)arg2;
+ (id)recordIDUsingSalt:(id)arg1 zoneID:(id)arg2 guid:(id)arg3;
+ (id)recordNameForRecordChangeTag:(id)arg1 ckRecordID:(id)arg2 salt:(id)arg3 guid:(id)arg4;
+ (id)recordNameUsingSalt:(id)arg1 guid:(id)arg2;

@end
