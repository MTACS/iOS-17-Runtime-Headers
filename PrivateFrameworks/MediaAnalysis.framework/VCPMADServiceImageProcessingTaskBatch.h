
@interface VCPMADServiceImageProcessingTaskBatch : VCPMABaseTask {
    NSString * _clientBundleID;
    NSString * _clientTeamID;
    PHPhotoLibrary * _photolibrary;
    NSDictionary * _requests;
    NSString * _signpostPayload;
}

@property (nonatomic, retain) NSString *signpostPayload;

+ (id)taskWithCloudIdentifierRequests:(id)arg1 photoLibrary:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4 cancelBlock:(id /* block */)arg5 andCompletionHandler:(id /* block */)arg6;

- (void).cxx_destruct;
- (id)assetWithIdentifier:(id)arg1 isCloudIdentifier:(bool)arg2 error:(id*)arg3;
- (bool)cachesResources;
- (id)initWithCloudIdentifierRequests:(id)arg1 photoLibrary:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4 cancelBlock:(id /* block */)arg5 andCompletionHandler:(id /* block */)arg6;
- (bool)run:(id*)arg1;
- (void)setSignpostPayload:(id)arg1;
- (id)signpostPayload;

@end
