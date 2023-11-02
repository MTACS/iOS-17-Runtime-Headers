
@interface NotesAssistantUtilities : NSObject

+ (id)folderForGroupName:(id)arg1 withNoteContext:(id)arg2 htmlNoteContext:(id)arg3;
+ (id)folderOptionsForModernContext:(id)arg1 htmlContext:(id)arg2;
+ (id)legacyFolderForGroupName:(id)arg1 withContext:(id)arg2;
+ (id)modernFolderForGroupName:(id)arg1 withContext:(id)arg2;
+ (id)objectForIDURL:(id)arg1 inContext:(id)arg2;

@end
