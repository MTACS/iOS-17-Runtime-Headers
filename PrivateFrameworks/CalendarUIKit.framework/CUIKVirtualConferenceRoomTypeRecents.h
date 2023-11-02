
@interface CUIKVirtualConferenceRoomTypeRecents : NSObject

+ (id)_extensionBundleIdentifierFromIdentifier:(id)arg1;
+ (id)_identifierFromRoomType:(id)arg1;
+ (void)_updateSavedMRUDictWithRoomTypes:(id)arg1 source:(id)arg2;
+ (void)cleanup;
+ (id)roomTypesOrderedByMRU:(id)arg1 forSource:(id)arg2;
+ (void)selectRoomType:(id)arg1 forSource:(id)arg2;

@end
