
@interface CPLEngineOutgoingResources : CPLEngineStorage <CPLAbstractObject>

@property (nonatomic, readonly) unsigned long long countOfOriginalImages;
@property (nonatomic, readonly) unsigned long long countOfOriginalOthers;
@property (nonatomic, readonly) unsigned long long countOfOriginalVideos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic, readonly) unsigned long long sizeOfOriginalResourcesToUpload;
@property (nonatomic, readonly) unsigned long long sizeOfResourcesToUpload;
@property (readonly) Class superclass;

- (unsigned long long)availableResourceSizeForUploadIdentifier:(id)arg1;
- (unsigned long long)countOfOriginalImages;
- (unsigned long long)countOfOriginalOthers;
- (unsigned long long)countOfOriginalVideos;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)deleteResourcesToUploadWithUploadIdentifier:(id)arg1 error:(id*)arg2;
- (bool)openWithError:(id*)arg1;
- (id)resourceTypesToUploadForChange:(id)arg1;
- (unsigned long long)scopeType;
- (bool)shouldUploadResource:(id)arg1;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)sizeOfResourcesToUpload;
- (bool)storeResourcesToUpload:(id)arg1 withUploadIdentifier:(id)arg2 shouldCheckResources:(bool)arg3 error:(id*)arg4;

@end
