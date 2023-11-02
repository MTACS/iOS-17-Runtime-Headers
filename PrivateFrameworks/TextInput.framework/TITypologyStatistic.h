
@interface TITypologyStatistic : NSObject

@property (nonatomic, readonly) NSDictionary *aggregateReport;
@property (nonatomic, readonly) NSDictionary *structuredReport;

+ (id)statistic;

- (id)aggregateReport;
- (void)finalizeComputation;
- (void)prepareForComputation;
- (id)structuredReport;
- (void)visitRecordAcceptedCandidate:(id)arg1;
- (void)visitRecordAutocorrections:(id)arg1;
- (void)visitRecordCandidateRejected:(id)arg1;
- (void)visitRecordCandidateResultSet:(id)arg1;
- (void)visitRecordHitTest:(id)arg1;
- (void)visitRecordKeyboardInput:(id)arg1;
- (void)visitRecordLastAcceptedCandidateCorrected:(id)arg1;
- (void)visitRecordPhraseBoundaryAdjustment:(id)arg1;
- (void)visitRecordRefinements:(id)arg1;
- (void)visitRecordReplacements:(id)arg1;
- (void)visitRecordSetOriginalInput:(id)arg1;
- (void)visitRecordSkipHitTest:(id)arg1;
- (void)visitRecordSync:(id)arg1;
- (void)visitRecordTextAccepted:(id)arg1;
- (void)visitTypologyLog:(id)arg1;
- (void)visitTypologyRecord:(id)arg1;

@end
