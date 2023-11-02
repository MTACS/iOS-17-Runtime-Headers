
@interface BRCImportUtil : NSObject

+ (void)forceIngestionForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)isFileNameIgnoredForSync:(id)arg1 isRegFile:(bool)arg2;
+ (bool)reimportItemsBelowItemWithIdentifier:(id)arg1 error:(id*)arg2;
+ (void)requestModificationOfItemIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)shouldFileIDBeIgnoredAsNonMigrated:(id)arg1 deviceID:(id)arg2 isRegFile:(bool)arg3 rowid:(id)arg4 isBusyDate:(bool*)arg5 isIgnoredFromSync:(bool*)arg6;

@end
