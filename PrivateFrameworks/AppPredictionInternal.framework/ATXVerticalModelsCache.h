
@interface ATXVerticalModelsCache : NSObject {
    _PASQueueLock * _lock;
}

- (void).cxx_destruct;
- (id)_fetchWebsiteCacheWithPath:(id)arg1 error:(id*)arg2;
- (id)_fetchWebsiteTitlesAndSubtitlesCacheWithPath:(id)arg1 error:(id*)arg2;
- (bool)_writeCache:(id)arg1 path:(id)arg2 withError:(id*)arg3;
- (id)fetchWebsiteSuggestionsCache;
- (id)fetchWebsiteTitlesAndSubtitlesCache;
- (id)init;
- (bool)writeWebsiteSuggestionsCache:(id)arg1;
- (bool)writeWebsiteTitlesAndSubtitlesCache:(id)arg1;

@end
