
@interface CalDAVBulkUploadTaskGroup : CoreDAVBulkUploadTaskGroup

- (id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (Class)multiPutTaskClass;

@end
