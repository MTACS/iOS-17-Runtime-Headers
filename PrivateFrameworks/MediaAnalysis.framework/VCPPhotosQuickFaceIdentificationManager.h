
@interface VCPPhotosQuickFaceIdentificationManager : NSObject {
    VCPFaceAnalyzer * _faceAnalyzer;
    NSObject<OS_dispatch_queue> * _management;
    VNPersonsModel * _personsModel;
    VNEntityIdentificationModel * _petsModel;
    PHPhotoLibrary * _photoLibrary;
    GDVUVisualUnderstandingService * _vuService;
}

+ (bool)_fastFaceMigrationEnabled;

- (void).cxx_destruct;
- (int)_classifyFaces:(id)arg1 forAsset:(id)arg2 detectedPersons:(id*)arg3;
- (bool)_faceProcessingPassGoalWithExtendTimeout:(id /* block */)arg1;
- (id)_fetchPersonsToFeedVIPModel:(bool)arg1 allowUnverifiedPerson:(bool)arg2;
- (id)_fetchPetsToFeedVIPModel;
- (int)_generatePersonsModelWithExtendTimeoutBlock:(id /* block */)arg1 cancel:(id /* block */)arg2 evaluationMode:(bool)arg3 allowUnverifiedPerson:(bool)arg4;
- (int)_generatePetsModelWithExtendTimeoutBlock:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (bool)_keepCurrentPersonsModelWithExtendTimeout:(id /* block */)arg1;
- (int)_loadPersonsModelAndInitializeFaceAnalyzer;
- (int)_loadPetsModel;
- (bool)_modelLastGenerationDidExceedTimeIntervalForType:(unsigned long long)arg1;
- (bool)_needToGenerateModelWithType:(unsigned long long)arg1 ignoreLastGenerationTime:(bool)arg2 withExtendTimeout:(id /* block */)arg3;
- (bool)_persistPersonsModel:(id)arg1 evaluationMode:(bool)arg2 error:(id*)arg3;
- (bool)_persistPetsModel:(id)arg1 error:(id*)arg2;
- (int)classifyVIPPets;
- (int)faceProcessingVersionFromVNFaceprintRequestRevision:(unsigned long long)arg1;
- (id)fetchEntityForModelType:(unsigned long long)arg1 evaluationMode:(bool)arg2 allowUnverifiedPerson:(bool)arg3;
- (int)generateVIPModelWithType:(unsigned long long)arg1 ignoreLastGenerationTime:(bool)arg2 evaluationMode:(bool)arg3 allowUnverifiedPerson:(bool)arg4 modelGenerated:(bool*)arg5 extendTimeout:(id /* block */)arg6 andCancel:(id /* block */)arg7;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (int)loadPersonsModelAndInitializeFaceAnalyzerWrapper;
- (void)personIdentificationForSyndicationPhotoLibrary:(id)arg1 withCancelOrExtendTimeoutBlock:(id /* block */)arg2;
- (int)processAsset:(id)arg1 onDemandDetection:(bool)arg2 detectedFaces:(id*)arg3 detectedPersons:(id*)arg4;

@end
