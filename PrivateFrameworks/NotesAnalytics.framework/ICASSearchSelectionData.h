
@interface ICASSearchSelectionData : NSObject <AADataEventType> {
    NSNumber * _charLengthOfQueryString;
    NSNumber * _gmRank;
    NSNumber * _gmRankIOS13;
    ICASGmRankingStrategyType * _gmRankingStrategyType;
    NSNumber * _isNoteFoundByAttachment;
    NSNumber * _isTopHit;
    NSArray * _searchRankingExperimentSummary;
    ICASSelectedResultAccountType * _selectedResultAccountType;
    NSString * _selectedResultID;
    ICASSelectedResultType * _selectedResultType;
}

@property (nonatomic, readonly) NSNumber *charLengthOfQueryString;
@property (nonatomic, readonly) NSNumber *gmRank;
@property (nonatomic, readonly) NSNumber *gmRankIOS13;
@property (nonatomic, readonly) ICASGmRankingStrategyType *gmRankingStrategyType;
@property (nonatomic, readonly) NSNumber *isNoteFoundByAttachment;
@property (nonatomic, readonly) NSNumber *isTopHit;
@property (nonatomic, readonly) NSArray *searchRankingExperimentSummary;
@property (nonatomic, readonly) ICASSelectedResultAccountType *selectedResultAccountType;
@property (nonatomic, readonly) NSString *selectedResultID;
@property (nonatomic, readonly) ICASSelectedResultType *selectedResultType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)charLengthOfQueryString;
- (id)gmRank;
- (id)gmRankIOS13;
- (id)gmRankingStrategyType;
- (id)initWithSelectedResultID:(id)arg1 selectedResultAccountType:(id)arg2 selectedResultType:(id)arg3 gmRankingStrategyType:(id)arg4 gmRank:(id)arg5 searchRankingExperimentSummary:(id)arg6 gmRankIOS13:(id)arg7 charLengthOfQueryString:(id)arg8 isNoteFoundByAttachment:(id)arg9 isTopHit:(id)arg10;
- (id)isNoteFoundByAttachment;
- (id)isTopHit;
- (id)searchRankingExperimentSummary;
- (id)selectedResultAccountType;
- (id)selectedResultID;
- (id)selectedResultType;
- (id)toDict;

@end
