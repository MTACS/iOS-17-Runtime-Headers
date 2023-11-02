
@interface PGEventLabelingFeaturesFileCache : NSObject {
    void cacheFile;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cacheFileURL;
    void delimiterByte;
    void featureExtractorsForCaching;
}

+ (id)cacheForMomentGraphRebuildWithGraphServiceURL:(id)arg1 graph:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)clearCacheWithError:(id*)arg1;
- (id)init;
- (bool)isCacheEmptyAtGraphServiceURL:(id)arg1;
- (bool)writeFeaturesForMomentNode:(id)arg1 assetFetchResult:(id)arg2 photoLibrary:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;

@end
