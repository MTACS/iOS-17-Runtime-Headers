
@interface PLMediaAnalysisServiceRequestAdapter : NSObject

+ (void)cancelRequest:(long long)arg1;
+ (id)currentFaceVersion;
+ (id)currentMediaAnalysisVersion;
+ (id)currentSceneVersion;
+ (unsigned long long)faceAnalysisTaskID;
+ (long long)invalidRequestID;
+ (unsigned long long)petVIPModelType;
+ (int)queryProgressDetail:(id*)arg1 forPhotoLibraryURL:(id)arg2 andTaskID:(unsigned long long)arg3;
+ (long long)requestClusterCacheValidationWithPhotoLibraryURL:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (long long)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progessHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (long long)requestMovieCurationForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (long long)requestPersonPromoterStatusWithAdvancedFlag:(bool)arg1 photoLibraryURL:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (long long)requestPetsAnalysisForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (long long)requestProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
+ (long long)requestQuickFaceIdentificationForPhotoLibraryURL:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(id /* block */)arg3;
+ (long long)requestRebuildPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (long long)requestReclusterFacesWithPhotoLibraryURL:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (long long)requestResetFaceClassificationModelForPhotoLibraryURL:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (long long)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (long long)requestResetPersons:(id)arg1 photoLibraryURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (long long)requestSceneProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
+ (long long)requestSuggestedMePersonIdentifierWithContext:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (long long)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 photoLibraryURL:(id)arg4 progessHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
+ (long long)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(bool)arg2 photoLibraryURL:(id)arg3 progessHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
+ (long long)requestVIPModelFilepathForPhotoLibraryURL:(id)arg1 forModelType:(unsigned long long)arg2 andCompletionHandler:(id /* block */)arg3;

@end
