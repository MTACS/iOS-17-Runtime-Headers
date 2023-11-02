
@interface TIAccumulatingCandidateHandler : NSObject <TICandidateHandler> {
    id /* block */  _candidateHandler;
    TIKeyboardCandidateResultSet * _candidateResultSet;
    id /* block */  _candidateResultSetHandler;
    TIAutocorrectionList * _candidates;
    unsigned long long  _status;
    <TICandidateHandler> * _wrappedCandidateHandler;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly, copy) id /* block */ candidateHandler;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *candidateResultSet;
@property (nonatomic, readonly, copy) id /* block */ candidateResultSetHandler;
@property (nonatomic, retain) TIAutocorrectionList *candidates;
@property (nonatomic, readonly) TICandidateRequestToken *requestToken;
@property (nonatomic, readonly) <TICandidateHandler> *wrappedCandidateHandler;

- (void).cxx_destruct;
- (bool)asynchronous;
- (id /* block */)candidateHandler;
- (id)candidateResultSet;
- (id /* block */)candidateResultSetHandler;
- (id)candidates;
- (void)close;
- (void)dealloc;
- (id)initWithHandlerBlock:(id /* block */)arg1;
- (id)initWithResultSetHandlerBlock:(id /* block */)arg1;
- (id)initWithWrappedCandidateHandler:(id)arg1 handlerBlock:(id /* block */)arg2 resultSetHandlerBlock:(id /* block */)arg3;
- (id)initWithWrappedCandidateHandler:(id)arg1 resultSetHandlerBlock:(id /* block */)arg2;
- (void)open;
- (void)pushCandidateResultSet:(id)arg1;
- (void)pushCandidates:(id)arg1;
- (id)requestToken;
- (void)setCandidateResultSet:(id)arg1;
- (void)setCandidates:(id)arg1;
- (id)wrappedCandidateHandler;

@end
