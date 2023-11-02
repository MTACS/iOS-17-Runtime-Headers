
@interface PLDeferredPhotoFinalizer : NSObject <AVCaptureDeferredPhotoProcessorDelegate> {
    NSDate * _dateBeforeCallingDeferredmediad;
    AVCaptureDeferredPhotoProcessor * _finalizer;
    NSMutableDictionary * _identifierToPendingRecords;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _identifierToPendingRecordsLock;
    PAImageConversionServiceClient * _imageConversionServiceClient;
    long long  _useCase;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)errorIsRecoverable:(id)arg1;

- (void).cxx_destruct;
- (void)_callCompletionHandlersForPhotoProxy:(id)arg1 processor:(id)arg2 success:(bool)arg3 error:(id)arg4;
- (void)_copyFrameRecoveredVideoComplementToFinalSlot:(id)arg1 libraryServicesManager:(id)arg2 resultURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_copyOriginalVideoComplementToDiagnosticPath:(id)arg1;
- (id)_createAssetAdjustmentsForAsset:(id)arg1 error:(id*)arg2;
- (id)_imageConversionOptionsForAsset:(id)arg1 adjustments:(id)arg2 isBackgroundPriority:(bool)arg3 reason:(id)arg4;
- (void)_prepareFinalizedAssetForSemanticDevelopment:(id)arg1 finalizedPhotoData:(id)arg2;
- (void)_promoteProxyAndRecoverErrors:(id)arg1 libraryServicesManager:(id)arg2 inError:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_repushOriginalVideoComplementIfNeeded:(id)arg1;
- (long long)_requestFrameDropRecoveryForAssetURL:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (void)_setupMediaConversionSourceCollections:(id)arg1 destinationCollection:(id)arg2 forAsset:(id)arg3;
- (void)_transitionDeferredProcessingNeededToNextStateForAsset:(id)arg1 originalHeight:(long long)arg2 originalWidth:(long long)arg3;
- (void)_writeDebugFileFromProxyMetadata:(id)arg1 forAsset:(id)arg2;
- (void)cancelOutstandingFrameDropRecoveryRequests;
- (int)deleteIntermediatesExcludingDeferredIdentifierRequestIdentifiers:(id)arg1;
- (id)initForUseCase:(long long)arg1;
- (bool)isRenderFromMetadata:(id)arg1;
- (void)performSemanticEnhanceForAsset:(id)arg1 isBackgroundPriority:(bool)arg2 reason:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)processor:(id)arg1 didFinishProcessingPhotoProxy:(id)arg2 finalPhoto:(id)arg3 error:(id)arg4;
- (void)requestFinalizationOfAsset:(id)arg1 isBackgroundPriority:(bool)arg2 reason:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)requestFrameDropRecoveryForAsset:(id)arg1 completionHandler:(id /* block */)arg2;

@end
