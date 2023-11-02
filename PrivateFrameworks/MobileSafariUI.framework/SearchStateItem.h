
@interface SearchStateItem : NSObject {
    NSDate * _cacheDate;
    CompletionList * _completionList;
    NSString * _destinationTLD;
    bool  _didOriginateFromSearchSuggestion;
    long long  _parsecQueryID;
}

@property (nonatomic, retain) NSDate *cacheDate;
@property (nonatomic, retain) CompletionList *completionList;
@property (nonatomic, copy) NSString *destinationTLD;
@property (nonatomic) bool didOriginateFromSearchSuggestion;
@property (nonatomic) long long parsecQueryID;

- (void).cxx_destruct;
- (id)cacheDate;
- (id)completionList;
- (id)destinationTLD;
- (bool)didOriginateFromSearchSuggestion;
- (long long)parsecQueryID;
- (void)setCacheDate:(id)arg1;
- (void)setCompletionList:(id)arg1;
- (void)setDestinationTLD:(id)arg1;
- (void)setDidOriginateFromSearchSuggestion:(bool)arg1;
- (void)setParsecQueryID:(long long)arg1;

@end
