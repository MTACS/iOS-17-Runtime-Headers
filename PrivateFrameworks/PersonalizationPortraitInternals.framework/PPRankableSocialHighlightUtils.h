
@interface PPRankableSocialHighlightUtils : NSObject

+ (bool)isSearchableItemCollaboration:(id)arg1;
+ (id)rankableHighlightFromSearchableItem:(id)arg1 attribution:(id)arg2 autoDonatingChats:(id)arg3 applicationIdentifiers:(id)arg4 clientIdentifier:(id)arg5 variant:(id)arg6;
+ (id)rankableHighlightFromSyncedItem:(id)arg1 applicationIdentifiers:(id)arg2 clientIdentifier:(id)arg3;
+ (int)socialContactSourceForContactSource:(unsigned char)arg1;

@end
