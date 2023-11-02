
@interface PPCustomDonation : NSObject

+ (bool)donateLabeledStrings:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 documentId:(id)arg4 error:(id*)arg5;
+ (bool)donateNotification:(id)arg1 error:(id*)arg2;
+ (bool)donateParsecNamedEntitiesAndTopics:(id)arg1 rawQuery:(id)arg2 reformulatedQuery:(id)arg3 source:(id)arg4 error:(id*)arg5;
+ (bool)donatePhotosLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
+ (bool)donatePhotosNamedEntities:(id)arg1 bundleId:(id)arg2 date:(id)arg3 error:(id*)arg4;
+ (bool)donatePhotosOneUpLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
+ (bool)donatePhotosTopics:(id)arg1 bundleId:(id)arg2 date:(id)arg3 error:(id*)arg4;
+ (bool)donateSiriQuery:(id)arg1 results:(id)arg2 error:(id*)arg3;

@end
