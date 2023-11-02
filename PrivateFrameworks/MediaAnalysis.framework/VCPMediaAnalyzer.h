
@interface VCPMediaAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> * _analysisQueue;
    NSObject<OS_dispatch_queue> * _cancelQueue;
    NSMutableDictionary * _cancelTokens;
    NSXPCConnection * _connection;
    NSXPCConnection * _mediaAnalysisServiceConnection;
    NSNumber * _minHighlightDuration;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _nextRequestID;
    NSNumber * _noResultStrip;
    NSMutableDictionary * _sandboxHandles;
    NSObject<OS_dispatch_queue> * _sandboxQueue;
    NSNumber * _standalone;
    NSObject<OS_dispatch_group> * _storageGroup;
    NSObject<OS_dispatch_queue> * _storageQueue;
}

+ (Class)_getDistanceDescriptorClass;
+ (id)classifyFaceObservation:(id)arg1 withPersonsModel:(id)arg2 error:(id*)arg3;
+ (unsigned long long)faceprintRevisionForPersonModel:(id)arg1;
+ (bool)includeTorsoOnlyForOneUP;
+ (id)loadPersonModelAtPath:(id)arg1 error:(id*)arg2;
+ (id)personModelFilepathForPhotoLibrary:(id)arg1;
+ (id)sharedMediaAnalyzer;

- (void).cxx_destruct;
- (id)_addClassificationResults:(id)arg1 analysis:(id)arg2;
- (id)_analyzeOndemand:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 withExistingAnalysis:(id)arg3 andOptions:(id)arg4 storeAnalysis:(bool)arg5 cancelBlock:(id /* block */)arg6;
- (void)_checkDuplicate:(id)arg1 withAsset:(id)arg2 duplicate:(long long*)arg3;
- (id)_databaseForPhotoLibrary:(id)arg1;
- (long long)_getDatabaseSandboxExtensionForPhotoLibraryURL:(id)arg1;
- (long long)_getSandboxExtensionForMediaAnalysisDatabaseWithPhotoLibraryURL:(id)arg1;
- (void)_getSceneDescriptors:(id)arg1 asDescriptorClass:(Class)arg2 withSceneRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 andAnalysisResults:(id)arg4;
- (unsigned long long)_metaAnalysisTypesForAsset:(id)arg1;
- (id)_postProcessMovieHighlights:(id)arg1 analysis:(id)arg2 withOptions:(id)arg3;
- (id)_queryDistanceDescriptor:(Class)arg1 ofAsset:(id)arg2 withExistingAnalysis:(id)arg3 andDatabase:(id)arg4 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5 lastFeature:(bool)arg6 isDegraded:(bool*)arg7;
- (id)_requestAnalysis:(unsigned long long)arg1 forAsset:(id)arg2 withExistingAnalysis:(id)arg3 andDatabase:(id)arg4 andOptions:(id)arg5 cancelBlock:(id /* block */)arg6;
- (void)_setupMediaAnalysisServiceConnection;
- (unsigned long long)_typesToRemove:(unsigned long long)arg1 requested:(unsigned long long)arg2;
- (id)analyzeOndemand:(id)arg1 pairedURL:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 error:(id*)arg4;
- (void)assetsAnalyzedSinceDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)assetsFromPhotoLibrary:(id)arg1 analyzedSinceDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)cancelAnalysisWithRequestID:(int)arg1;
- (void)completeStorage;
- (id)connection;
- (id)curateMovieAssetsForCollection:(id)arg1 withAlreadyCuratedAssets:(id)arg2 andDesiredCount:(unsigned long long)arg3 allowOnDemand:(bool)arg4;
- (void)dealloc;
- (void)distanceFromAsset:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 toAsset:(id)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4 duplicate:(long long*)arg5 distance:(float*)arg6;
- (void)distanceFromAsset:(id)arg1 toAsset:(id)arg2 duplicate:(long long*)arg3 distance:(float*)arg4;
- (int)findTimeRangesFor:(id)arg1 inAsset:(id)arg2 withOptions:(id)arg3 andProgressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (int)findTimeRangesFor:(id)arg1 inURLAsset:(id)arg2 withOptions:(id)arg3 andProgressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (int)findTimeRangesWithContext:(id)arg1 inAsset:(id)arg2 withOptions:(id)arg3 andProgressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (int)findTimeRangesWithContext:(id)arg1 inURLAsset:(id)arg2 withOptions:(id)arg3 andProgressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (id)getTimeRangeResultsForURLAsset:(id)arg1;
- (id)getTimeRangesForActionIDs:(id)arg1 withResults:(id)arg2;
- (id)getTimeRangesForSceneIdentifiers:(id)arg1 withResults:(id)arg2;
- (id)getTimeRangesForSoundIdentifiers:(id)arg1 withResults:(id)arg2;
- (id)getTimeRangesInAsset:(id)arg1 forFaces:(id)arg2 withAnalysis:(id)arg3;
- (id)getTimeRangesInAsset:(id)arg1 forPersonLocalIdentifiers:(id)arg2 withAnalysis:(id)arg3;
- (id)init;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })postProcessMovieHighlightDuration:(id)arg1 withOptions:(id)arg2;
- (id)postProcessTimeRanges:(id)arg1 mergeGap:(id)arg2;
- (int)requestAnalysesForAssets:(id)arg1 analysisTypes:(unsigned long long)arg2 allowOndemand:(bool)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (int)requestAnalysis:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 andProgressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (id)requestAnalysis:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 andProgressHandler:(id /* block */)arg4 andError:(id*)arg5;
- (int)requestAnalysisForAsset:(id)arg1 analysisTypes:(unsigned long long)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)requestAnalysisTypes:(unsigned long long)arg1 forAssetWithResourceURLs:(id)arg2 withOptions:(id)arg3 error:(id*)arg4;
- (id)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 allowOndemand:(bool)arg3 progressHandler:(id /* block */)arg4 error:(id*)arg5;
- (int)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 andProgressHandler:(id /* block */)arg4 cancelBlock:(id /* block */)arg5 analyses:(id)arg6;
- (id)requestLivePhotoEffectsForAssets:(id)arg1 allowOnDemand:(bool)arg2 flags:(unsigned long long)arg3;
- (id)requestMovieHighlightsForAssets:(id)arg1 withOptions:(id)arg2;

@end
