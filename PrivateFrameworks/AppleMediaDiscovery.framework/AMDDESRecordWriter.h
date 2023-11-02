
@interface AMDDESRecordWriter : NSObject

+ (bool)evaluatePredicate:(id)arg1 withDomain:(id)arg2;
+ (id)writeDESRecordWithBundleIdentifier:(id)arg1 withRecord:(id)arg2 error:(id*)arg3;
+ (id)writeDESRecords:(id)arg1;
+ (id)writeDESRecords:(id)arg1 forPluginName:(id)arg2 withBundleIdentifier:(id)arg3 domain:(id)arg4 error:(id*)arg5;
+ (id)writeDESRecordsForPlugin:(id)arg1 withPayload:(id)arg2 andDomain:(id)arg3;

@end
