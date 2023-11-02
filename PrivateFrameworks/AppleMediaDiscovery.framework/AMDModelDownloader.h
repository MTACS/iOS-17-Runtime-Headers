
@interface AMDModelDownloader : NSObject <NSURLSessionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)cleanupDiskForModelDirectory:(id)arg1 withSavedVersionURL:(id)arg2;
+ (void)deleteColdstartBinaryFromStorage:(id)arg1 forModel:(id)arg2 isVersionChange:(bool)arg3 error:(id*)arg4;
+ (void)deleteModelFromStorage:(id)arg1 isVersionChange:(bool)arg2 error:(id*)arg3;
+ (id)ensureNewVersionDirURLForModel:(id)arg1 withVersion:(unsigned long long)arg2 andCreationTime:(long long)arg3;
+ (id)parseModel:(id)arg1 atLocation:(id)arg2 withVersion:(id)arg3 withStorefrontId:(id)arg4 error:(id*)arg5;
+ (id)parseModelWithId:(id)arg1 withStorefrontId:(id)arg2 fromArchive:(id)arg3 withBaseRecoModel:(id)arg4;
+ (id)performModelCleanup;
+ (id)processColdstartBinaryDownload:(id)arg1 error:(id*)arg2;
+ (id)processModelDownload:(id)arg1 withStorefrontID:(id)arg2 error:(id*)arg3;
+ (id)removeOldColdstartBinaries:(id)arg1;
+ (id)removeOldModels:(id)arg1;
+ (id)saveMapFile:(id)arg1 ofSize:(int)arg2 isCompressed:(bool)arg3 inDirURL:(id)arg4 fromBuffer:(id)arg5;
+ (void)saveMinimalContentToLogicalMapForModelId:(id)arg1 fromMapData:(id)arg2;
+ (id)unzipAndValidateCompiledModelBundle:(id)arg1 atLocation:(id)arg2 withVersion:(id)arg3 error:(id*)arg4;
+ (id)unzipDownloadedModelBundle:(id)arg1 atLocation:(id)arg2 withVersion:(id)arg3 error:(id*)arg4;
+ (id)unzipModel:(id)arg1 atLocation:(id)arg2 withVersion:(id)arg3 error:(id*)arg4;
+ (void)unzipModelFile:(id)arg1 copyToDestination:(id)arg2 error:(id*)arg3;
+ (id)updateAppTabInfoForWorkflows:(id)arg1;
+ (void)validateDownloadAtLocation:(id)arg1 withModelId:(id)arg2 andVersion:(id)arg3 error:(id*)arg4;

- (id)downloadModel:(id)arg1 forVersion:(id)arg2 usingUrl:(id)arg3 withStorefrontId:(id)arg4 andSkipDecision:(bool*)arg5 error:(id*)arg6;
- (int)getVersionForModel:(id)arg1;
- (void)printJson:(id)arg1;

@end
