
@interface CNCalculatesContactDiff : NSObject

+ (void)addMultiValueUpdateTo:(id)arg1 forProperty:(id)arg2 contact1:(id)arg3 contact2:(id)arg4;
+ (void)addSingleValueUpdateTo:(id)arg1 forProperty:(id)arg2 contact1:(id)arg3 contact2:(id)arg4;
+ (id)backgroundColorRelatedKeys;
+ (void)cleanOrphanedCropUpdates:(id)arg1 withContact1:(id)arg2 contact2:(id)arg3;
+ (void)clearBackgroundColorInUpdates:(id)arg1 forContact:(id)arg2;
+ (id)diffContact:(id)arg1 to:(id)arg2 error:(id*)arg3;
+ (id)imageMetadataLog;
+ (bool)shouldSaveDuplicateProperty:(id)arg1 value1:(id)arg2 value2:(id)arg3;

@end
