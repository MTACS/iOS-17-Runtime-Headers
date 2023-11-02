
@interface _MUISearchSuggestionsOperation : NSObject {
    MUISearchSuggestionsGenerator * _generator;
    _Atomic bool  _isCancelled;
    MUISearchSuggestionPhraseManager * _phraseManager;
    NSObject<OS_dispatch_queue> * _queue;
    MUISearchRequestID * _requestID;
    NSMutableArray * _runningSuggesters;
    NSArray * _suggesters;
}

- (void).cxx_destruct;

@end
