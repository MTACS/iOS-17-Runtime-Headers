
@interface IRCandidateSelector : NSObject {
    bool  _candidateSelectorReasonMostlyUsedAnyApp;
    bool  _candidateSelectorReasonMostlyUsedSimilarApp;
    bool  _candidateSelectorReasonProximity;
    bool  _candidateSelectorReasonRecentlyUsed;
}

@property (nonatomic) bool candidateSelectorReasonMostlyUsedAnyApp;
@property (nonatomic) bool candidateSelectorReasonMostlyUsedSimilarApp;
@property (nonatomic) bool candidateSelectorReasonProximity;
@property (nonatomic) bool candidateSelectorReasonRecentlyUsed;

- (void)_adjustNominatedClassificationDescription:(id)arg1 forCandidate:(id)arg2;
- (id)_selectBasedOnContinuityFromCandidates:(id)arg1 withSystemState:(id)arg2 andHistoryEventsAsc:(id)arg3 andDate:(id)arg4;
- (id)_selectBasedOnMostUsedAnyAppFromCandidates:(id)arg1 withSystemState:(id)arg2 andHistoryEventsAsc:(id)arg3 andDate:(id)arg4;
- (id)_selectBasedOnMostUsedSimilarAppFromCandidates:(id)arg1 withSystemState:(id)arg2 andHistoryEventsAsc:(id)arg3 andDate:(id)arg4;
- (id)_selectBasedOnNearestRangeOrHistoryOrSameICloudFromCandidates:(id)arg1 withSystemState:(id)arg2 andHistoryEventsAsc:(id)arg3;
- (id)_selectFromCandidates:(id)arg1 withSystemState:(id)arg2 andHistoryEventsAsc:(id)arg3 andDate:(id)arg4 andRule:(id)arg5;
- (id)adjustClassificationForCandidateBasedOnNegativeInputs:(id)arg1 withSystemState:(id)arg2 andHistoryEventsAsc:(id)arg3 andMiloPrediction:(id)arg4 andDate:(id)arg5;
- (bool)candidateSelectorReasonMostlyUsedAnyApp;
- (bool)candidateSelectorReasonMostlyUsedSimilarApp;
- (bool)candidateSelectorReasonProximity;
- (bool)candidateSelectorReasonRecentlyUsed;
- (id)getSelectorReasons;
- (id)selectFromCandidates:(id)arg1 withSystemState:(id)arg2 andHistoryEventsAsc:(id)arg3 andDate:(id)arg4;
- (void)setCandidateSelectorReasonMostlyUsedAnyApp:(bool)arg1;
- (void)setCandidateSelectorReasonMostlyUsedSimilarApp:(bool)arg1;
- (void)setCandidateSelectorReasonProximity:(bool)arg1;
- (void)setCandidateSelectorReasonRecentlyUsed:(bool)arg1;

@end
