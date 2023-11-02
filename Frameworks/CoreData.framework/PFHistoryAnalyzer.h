
@interface PFHistoryAnalyzer : NSObject {
    PFHistoryAnalyzerOptions * _options;
}

- (void)dealloc;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)arg1;
- (bool)processTransaction:(id)arg1 withContext:(id)arg2 error:(id*)arg3;

@end
