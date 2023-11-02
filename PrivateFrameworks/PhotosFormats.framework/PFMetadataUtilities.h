
@interface PFMetadataUtilities : NSObject

+ (bool)addMakerApplePropertyWithKey:(id)arg1 value:(id)arg2 toProperties:(id)arg3;
+ (bool)addQuickTimeMetadataItemsWithIdentifier:(id)arg1 value:(id)arg2 toItems:(id)arg3;
+ (id)itemsByRemovingMetadataItemForIdentifier:(id)arg1 fromArray:(id)arg2;
+ (id)mutableImagePropertyDictionaryForMetadata:(id)arg1;

@end
