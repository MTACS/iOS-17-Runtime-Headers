
@interface PHInternalAssetExportRequest : PHAssetExportRequest {
    PHResourceLocalAvailabilityRequest * _resourceRetrievalRequest;
    NSProgress * _resourceRetrievalRequestProgressParent;
    NSObject<OS_dispatch_queue> * _resourceRetrievingQueue;
}

+ (id)exportRequestForAsset:(id)arg1 error:(id*)arg2;
+ (id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id*)arg3;
+ (id)variantsForAsset:(id)arg1 asUnmodifiedOriginal:(bool)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_initWithAsset:(id)arg1 variants:(id)arg2 resourceRetrievalRequest:(id)arg3 retrievalRequestProgressParent:(id)arg4;
- (void)exportWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long*)arg2 isProcessingRequired:(bool*)arg3 fileURLs:(id*)arg4 info:(id*)arg5;

@end
