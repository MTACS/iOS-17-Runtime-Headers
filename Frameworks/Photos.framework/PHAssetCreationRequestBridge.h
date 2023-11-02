
@interface PHAssetCreationRequestBridge : NSObject <PLAssetJobExecutor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)buildAdjustmentsPlistPathForPhotoKitIngestJob:(id)arg1 withSourcePath:(id)arg2;

- (void)_deleteJobFileAtPath:(id)arg1 withJobDict:(id)arg2;
- (bool)_executeCreationRequestWithImageJobDict:(id)arg1 error:(id*)arg2;
- (bool)_executeCreationRequestWithVideoJobDict:(id)arg1 error:(id*)arg2;
- (bool)_finalizeBurstImage:(id)arg1;
- (bool)executeCreationRequestWithBatchJobDictionaries:(id)arg1 jobSuccess:(bool*)arg2 jobError:(id*)arg3;
- (bool)executeCreationRequestWithJobDict:(id)arg1 jobSuccess:(bool*)arg2 jobError:(id*)arg3;

@end
