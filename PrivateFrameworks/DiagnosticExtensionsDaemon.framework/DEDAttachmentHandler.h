
@interface DEDAttachmentHandler : NSObject {
    bool  _compressOnAttach;
    NSObject<OS_os_log> * _log;
}

@property bool compressOnAttach;
@property (retain) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)_createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 withSessionIdentifier:(id)arg3 device:(id)arg4 withRootDir:(id)arg5;
- (id)_processAttachments:(id)arg1 withSessionIdentifier:(id)arg2 extension:(id)arg3 rootDir:(id)arg4;
- (id)_processAttachments:(id)arg1 withSessionIdentifier:(id)arg2 extension:(id)arg3 shouldAddClassBDataProtection:(bool)arg4 rootDir:(id)arg5;
- (id)collectedGroupsWithSessionIdentifier:(id)arg1 matchingExtensions:(id)arg2;
- (bool)compressOnAttach;
- (id)createEmptyMessageFileForDE:(id)arg1 extensionName:(id)arg2 withSessionIdentifier:(id)arg3 device:(id)arg4;
- (id)dedDirectory;
- (id)directoryForBugSessionIdentifier:(id)arg1;
- (id)directoryForBugSessionIdentifier:(id)arg1 createIfNeeded:(bool)arg2;
- (id)directoryForBugSessionWithIdentifier:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3;
- (id)directoryForBugSessionWithIdentifier:(id)arg1 extension:(id)arg2 rootDirectory:(id)arg3 createIfNeeded:(bool)arg4;
- (id)directoryForBugSessionWithIdentifier:(id)arg1 rootDirectory:(id)arg2 createIfNeeded:(bool)arg3;
- (unsigned long long)directorySizeForBugSessionIdentifier:(id)arg1;
- (id)extensionsWithFilesAttachedToSessionWithID:(id)arg1 allExtensions:(id)arg2;
- (id)identifierForAdoptingFile:(id)arg1;
- (id)init;
- (id)log;
- (id)processAttachments:(id)arg1 withSessionIdentifier:(id)arg2 extension:(id)arg3 shouldAddClassBDataProtection:(bool)arg4;
- (void)removeDEFiles:(id)arg1 withSessionIdentifier:(id)arg2;
- (void)removeDirectoryForBugSessionIdentifier:(id)arg1;
- (void)setCompressOnAttach:(bool)arg1;
- (void)setLog:(id)arg1;

@end
