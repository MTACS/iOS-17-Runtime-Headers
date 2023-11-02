
@interface PFLTraining : NSObject

- (id)createDataSourceForRecipe:(id)arg1 attachments:(id)arg2 recordDatas:(id)arg3 recordInfos:(id)arg4 error:(id*)arg5;
- (id)createEvaluatorForModelType:(id)arg1 newAPI:(bool)arg2 error:(id*)arg3;
- (id)loadRecordsForRecordSet:(id)arg1;
- (id)runTask:(id)arg1 recordSet:(id)arg2 error:(id*)arg3;
- (id)taskResultFromDict:(id)arg1 newAPI:(bool)arg2;

@end
