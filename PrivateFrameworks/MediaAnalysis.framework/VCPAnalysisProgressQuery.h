
@interface VCPAnalysisProgressQuery : NSObject

+ (unsigned long long)_countAnalysisWithAssetBatch:(id)arg1 andDatabase:(id)arg2 andTaskID:(unsigned long long)arg3;
+ (unsigned long long)_countEmbeddingAnalysisWithAssetBatch:(id)arg1;
+ (unsigned long long)_countFaceAnalysisWithAssetBatch:(id)arg1;
+ (unsigned long long)_countFailuresWithAssetBatch:(id)arg1 andDatabase:(id)arg2 andTaskID:(unsigned long long)arg3;
+ (void)_countMediaAnalysisWithAssetBatch:(id)arg1 andDatabase:(id)arg2 analyzedCount:(unsigned long long*)arg3 completeAnalyzedCount:(unsigned long long*)arg4 partialAnalyzedCount:(unsigned long long*)arg5;
+ (unsigned long long)_countOCRAnalysisWithAssetBatch:(id)arg1;
+ (unsigned long long)_countPECAnalysisWithAssetBatch:(id)arg1;
+ (unsigned long long)_countSceneAnalysisWithAssetBatch:(id)arg1;
+ (unsigned long long)_countVisualSearchAnalysisWithAssetBatch:(id)arg1;
+ (id)_processedPredicateForTaskID:(unsigned long long)arg1;
+ (int)_queryProgressDetailExpress:(id*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3;
+ (int)_queryProgressDetailExpressEmbeddingAnalysis:(id*)arg1 forPhotoLibrary:(id)arg2;
+ (int)_scanPhotoLibrary:(id)arg1 withTaskID:(unsigned long long)arg2 statistics:(id*)arg3 andExtendTimeoutBlock:(id /* block */)arg4;
+ (bool)_screenProgress;
+ (unsigned long long)_vipStatusForPhotoLibrary:(id)arg1 andType:(unsigned long long)arg2;
+ (int)queryCachedFaceAnalysisProgress:(id*)arg1 forPhotoLibrary:(id)arg2 withExtendTimeoutBlock:(id /* block */)arg3;
+ (int)queryProgress:(float*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 withExtendTimeoutBlock:(id /* block */)arg4;
+ (int)queryProgressDetail:(id*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 withExtendTimeoutBlock:(id /* block */)arg4;
+ (void)reportProgressForPhotoLibrary:(id)arg1 taskID:(unsigned long long)arg2 logMessage:(id)arg3 withExtendTimeoutBlock:(id /* block */)arg4;

@end
