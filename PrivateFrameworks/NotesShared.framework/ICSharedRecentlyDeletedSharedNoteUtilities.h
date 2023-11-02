
@interface ICSharedRecentlyDeletedSharedNoteUtilities : NSObject

+ (id)messageForSharedNotesType:(unsigned long long)arg1;
+ (id)notesSharedViaICloudFromNotes:(id)arg1;
+ (unsigned long long)sharedNoteTypeForNotes:(id)arg1;
+ (void)showAlertsIfNecessaryForDeletingSharedNotes:(id)arg1 noteDeleteType:(unsigned long long)arg2 displayWindow:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)showDeletingSharedNotesAlertWithType:(unsigned long long)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)titleForSharedNotesType:(unsigned long long)arg1;

@end
