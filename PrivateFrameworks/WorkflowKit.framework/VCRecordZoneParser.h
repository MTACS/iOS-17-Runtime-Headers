
@interface VCRecordZoneParser : NSObject

+ (id /* block */)activeRecordZone:(id /* block */)arg1;
+ (bool)parseZoneID:(id)arg1 intoIndex:(long long*)arg2;
+ (bool)shouldIgnoreZoneID:(id)arg1;
+ (id)sortedVoiceShortcutZoneIDsFromZoneIDs:(id)arg1;

@end
