
@interface CKContextCompleter : NSObject {
    NSArray * _couldHaveShown;
    unsigned long long  _creationTime;
    _Atomic bool  _discarded;
    _Atomic bool  _engaged;
    bool  _hideCompletions;
    NSDate * _hideCompletionsAfterDate;
    bool  _hideZKW;
    NSString * _ignorePrefix;
    NSString * _input;
    _Atomic unsigned long long  _inputKeystrokes;
    bool  _likelyUnsolicited;
    unsigned long long  _mustPrefixMatchLength;
    CKContextResponse * _response;
    NSLocale * _searchLocale;
    NSMutableArray * _zkwResults;
}

- (void).cxx_destruct;
- (id)_resultsMatching:(id)arg1;
- (void)dealloc;
- (void)discard;
- (id)initWithResponse:(id)arg1;
- (void)logEngagement:(id)arg1 forInput:(id)arg2;
- (void)logEngagement:(id)arg1 forInput:(id)arg2 completion:(id)arg3;
- (void)logResultsShown:(unsigned long long)arg1 serverOverride:(bool)arg2;
- (void)logResultsShown:(unsigned long long)arg1 serverOverride:(bool)arg2 forInput:(id)arg3;
- (void)logTransactionSuccessfulForInput:(id)arg1;
- (void)logTransactionSuccessfulForInput:(id)arg1 completion:(id)arg2;
- (id)queriesMatching:(id)arg1;
- (id)resultsMatching:(id)arg1;
- (id)resultsMatchingTags:(id)arg1;

@end
