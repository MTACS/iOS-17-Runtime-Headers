
@protocol ODCurareEvaluatorProtocol

@optional

- (ODCurareReportFillerModelEvaluationSummary *)evaluateWithModel:(ODCurareCandidateModel *)arg1;
- (NSArray *)evaluateWithModel:(MLModel *)arg1 batchProvider:(id <MLBatchProvider>)arg2;
- (NSArray *)evaluateWithModel:(MLModel *)arg1 dataArray:(NSArray *)arg2 modelType:(unsigned long long)arg3;

@end
