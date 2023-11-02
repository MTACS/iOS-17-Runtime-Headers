
@interface DOCFileRenamingSupport : NSObject

// Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager

+ (id)_filteredNameForName:(id)arg1 error:(id*)arg2;
+ (id)_urlForProposedName:(id)arg1 originalURL:(id)arg2 error:(id*)arg3;
+ (bool)_validateFileName:(id)arg1 error:(id*)arg2;
+ (id)fallbackRename:(id)arg1 toProposedName:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

+ (void)_renameDocumentAtURL:(id)arg1 newName:(id)arg2 hostIdentifier:(id)arg3 roleIdentifier:(id)arg4 completion:(id /* block */)arg5;
+ (void)_workaroundWrapper_renameDocumentAtURL:(id)arg1 newName:(id)arg2 hostIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;

@end
