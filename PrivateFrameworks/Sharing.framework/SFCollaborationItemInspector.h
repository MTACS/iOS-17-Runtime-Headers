
@interface SFCollaborationItemInspector : NSObject

+ (id)_collaborationItemForFileURL:(id)arg1 itemProvider:(id)arg2 activityItem:(id)arg3 service:(id)arg4 managedFileURL:(id)arg5;
+ (id)_collaborationItemFromItemProvider:(id)arg1 forActivityItem:(id)arg2 service:(id)arg3 shouldInspectFiles:(bool)arg4 managedFileURL:(id)arg5 isURLProviderSupported:(bool)arg6;
+ (id)inspectActivityItemValue:(id)arg1 activityItem:(id)arg2 service:(id)arg3 shouldInspectFiles:(bool)arg4 managedFileURL:(id)arg5 isURLProviderSupported:(bool)arg6;

@end
