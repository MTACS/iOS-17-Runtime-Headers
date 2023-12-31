
@interface NTKPhotoAnalysisFileCache : NSObject {
    NSMutableDictionary * _cache;
    bool  _cacheDirty;
    int  _sequenceNumber;
    NTKTaskScheduler * _taskScheduler;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dirtyCache;
- (bool)_load;
- (bool)_save;
- (void)dealloc;
- (id)init;
- (id)photoAnalysisForIdentifier:(id)arg1;
- (void)setPhotoAnalysis:(id)arg1 forIdentifier:(id)arg2;

@end
