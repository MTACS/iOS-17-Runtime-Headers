
@interface PXStoryMediaAnalysisMovieHighlightsProducer : NSObject <PXStoryMovieHighlightsProducer> {
    unsigned long long  _batchSize;
    NSObject<OS_os_log> * _log;
    <PXMediaAnalyzer> * _mediaAnalyzer;
    NSObject<OS_dispatch_queue> * _results_queue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) <PXMediaAnalyzer> *mediaAnalyzer;

- (void).cxx_destruct;
- (id)_requestMovieCurationForAssets:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_requestMovieHighlightsForAssets:(id)arg1 partialCollection:(id)arg2 options:(unsigned long long)arg3 resultHandler:(id /* block */)arg4;
- (unsigned long long)batchSize;
- (id)init;
- (id)mediaAnalyzer;
- (id)requestMovieHighlightsForAssets:(id)arg1 partialCollection:(id)arg2 options:(unsigned long long)arg3 resultHandler:(id /* block */)arg4;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setMediaAnalyzer:(id)arg1;
- (void)waitUntilScheduled;

@end
