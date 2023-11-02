
@interface PHAQuestionController : NSObject {
    short  _currentQuestionVersion;
    PGManager * _graphManager;
    NSObject<OS_os_log> * _loggingConnection;
    NSMutableDictionary * _questionTypeImportanceByQuestionType;
    NSUbiquitousKeyValueStore * _store;
    PGTrialSession * _trialSession;
}

@property (nonatomic, retain) PGManager *graphManager;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, retain) NSMutableDictionary *questionTypeImportanceByQuestionType;
@property (nonatomic, retain) NSUbiquitousKeyValueStore *store;
@property (nonatomic, retain) PGTrialSession *trialSession;

- (void).cxx_destruct;
- (void)_handleKVSQuestionsUpdateIfNeededWithProgressBlock:(id /* block */)arg1;
- (void)_handleQuestionVersionBumpIfNeededWithProgressBlock:(id /* block */)arg1;
- (void)_syncAnsweredQuestionsWithProgressBlock:(id /* block */)arg1;
- (void)_updateInvalidQuestionsWithProgressBlock:(id /* block */)arg1;
- (id)allQuestionFactories;
- (void)assignScoreToQuestions:(id)arg1;
- (id)currentQuestionsKVSData;
- (bool)generateQuestionsWithOptions:(long long)arg1 limit:(unsigned long long)arg2 handleQuestionVersionBump:(bool)arg3 updateInvalidQuestions:(bool)arg4 progress:(id /* block */)arg5;
- (bool)generateQuestionsWithOptions:(long long)arg1 progress:(id /* block */)arg2;
- (id)graphManager;
- (double)importanceOfQuestionType:(id)arg1;
- (id)initWithGraphManager:(id)arg1;
- (id)loggingConnection;
- (bool)persistQuestions:(id)arg1;
- (id)questionFactoriesForOptions:(long long)arg1;
- (id)questionTypeImportanceByQuestionType;
- (void)removeCurrentKVSData;
- (id)selectedQuestionsFromSortedQuestionsByQuestionType:(id)arg1 withLimit:(unsigned long long)arg2;
- (void)setGraphManager:(id)arg1;
- (void)setQuestionTypeImportanceByQuestionType:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setTrialSession:(id)arg1;
- (id)store;
- (id)trialSession;

@end
