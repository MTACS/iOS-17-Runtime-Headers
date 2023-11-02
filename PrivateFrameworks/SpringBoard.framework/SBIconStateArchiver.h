
@interface SBIconStateArchiver : SBHIconStateArchiver

+ (id)_iTunesDictionaryForLeafIcon:(id)arg1 withIdentifier:(id)arg2;
+ (id)_iTunesDictionaryForLeafIdentifier:(id)arg1;
+ (id)_iTunesIconCellForCell:(id)arg1 preApex:(bool)arg2 pending:(bool)arg3 iconSource:(id)arg4;
+ (id)_iTunesIconListForList:(id)arg1 preApex:(bool)arg2 pending:(bool)arg3 iconSource:(id)arg4;
+ (id)_iTunesIconListsForLists:(id)arg1 preApex:(bool)arg2 pending:(bool)arg3 iconSource:(id)arg4;
+ (id)_migrateLeafIdentifierIfNecessary:(id)arg1;
+ (id)_modernIconCellForCell:(id)arg1 allowFolders:(bool)arg2;
+ (id)_modernIconListForList:(id)arg1 allowFolders:(bool)arg2;
+ (id)_modernIconListsForLists:(id)arg1 allowFolders:(bool)arg2;
+ (id)iTunesRepresentationFromRootArchive:(id)arg1 preApex:(bool)arg2 pending:(bool)arg3 iconSource:(id)arg4;
+ (id)modernizeRootArchive:(id)arg1;
+ (id)rootArchiveFromITunesRepresentation:(id)arg1;

@end
