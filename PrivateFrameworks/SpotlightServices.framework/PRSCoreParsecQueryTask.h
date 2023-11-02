
@interface PRSCoreParsecQueryTask : PRSQueryTask {
    PARSession * _parSession;
    bool  _parsecEnabled;
    SPSearchSuggestionResult * _suggestionResult;
    PARTask * _task;
}

@property (nonatomic, retain) SPSearchSuggestionResult *suggestionResult;
@property (retain) PARTask *task;

- (void).cxx_destruct;
- (void)handleResults:(id)arg1;
- (id)initWithSession:(id)arg1 parsecSession:(id)arg2 handler:(id)arg3 queue:(id)arg4 queryContext:(id)arg5 queryIdent:(unsigned long long)arg6;
- (bool)needsBag;
- (void)resume;
- (void)setParsecState:(bool)arg1;
- (void)setSuggestionResult:(id)arg1;
- (void)setTask:(id)arg1;
- (id)suggestionResult;
- (id)task;

@end
