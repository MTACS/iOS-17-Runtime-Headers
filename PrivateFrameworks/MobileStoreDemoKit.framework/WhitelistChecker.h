
@interface WhitelistChecker : NSObject {
    NSSet * _blackListedPaths;
    NSDictionary * _domains;
    NSString * _domainsPlistFilePath;
}

@property (nonatomic, retain) NSSet *blackListedPaths;
@property (nonatomic, retain) NSDictionary *domains;
@property (nonatomic, retain) NSString *domainsPlistFilePath;

- (void).cxx_destruct;
- (bool)annotated:(id)arg1;
- (id)blackListedPaths;
- (bool)checkFile_WatchAndTV:(id)arg1 withMetaData:(id)arg2;
- (bool)checkFile_iOS:(id)arg1 withMetaData:(id)arg2;
- (bool)checkFile_macOS:(id)arg1 withMetaData:(id)arg2;
- (bool)checkManifest:(id)arg1;
- (id)createFullPathList:(id)arg1 rootPath:(id)arg2 isAllowList:(bool)arg3;
- (id)domains;
- (id)domainsPlistFilePath;
- (bool)file:(id)arg1 blacklisted:(id)arg2;
- (bool)file:(id)arg1 whitelisted:(id)arg2;
- (id)getRealPathForFile:(id)arg1 withMetaData:(id)arg2;
- (bool)handleSystemContainerFiles:(id)arg1 withMetadata:(id)arg2;
- (id)init;
- (bool)load;
- (bool)loadFromFile:(id)arg1;
- (void)setBlackListedPaths:(id)arg1;
- (void)setDomains:(id)arg1;
- (void)setDomainsPlistFilePath:(id)arg1;
- (bool)shouldRestoreSystemContainer_WatchAndTV:(id)arg1 shared:(bool)arg2;
- (bool)shouldRestoreSystemContainer_iOS:(id)arg1 shared:(bool)arg2;

@end
