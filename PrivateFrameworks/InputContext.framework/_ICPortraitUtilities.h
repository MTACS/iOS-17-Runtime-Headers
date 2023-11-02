
@interface _ICPortraitUtilities : NSObject

+ (id)acceptedAlgorithms;
+ (id)acceptedSourceBundleIds;
+ (unsigned char)contactChangeTypeForPortraitChangeType:(unsigned char)arg1;
+ (id)contactFromPortraitContact:(id)arg1;
+ (id)contactRecordFromPortraitContactRecord:(id)arg1;
+ (unsigned char)contactSourceTypeForPortraitSourceType:(unsigned char)arg1;
+ (id)excludedAlgorithms;
+ (id)filteredNamedEntitiesFromJSONDonations:(id)arg1;
+ (id)namedEntityRecordFromPortraitNamedEntityRecord:(id)arg1;

@end
