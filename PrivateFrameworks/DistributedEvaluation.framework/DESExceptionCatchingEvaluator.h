
@interface DESExceptionCatchingEvaluator : NSObject <DESRecipeEvaluation> {
    <DESRecipeEvaluation> * _evaluator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)evaluateRecipe:(id)arg1 matchingRecordSet:(id)arg2 binaryResult:(id*)arg3 error:(id*)arg4;
- (id)evaluateRecipe:(id)arg1 matchingRecordSet:(id)arg2 error:(id*)arg3;
- (id)evaluateRecipe:(id)arg1 recordInfo:(id)arg2 recordData:(id)arg3 attachments:(id)arg4 error:(id*)arg5;
- (id)initWithEvaluator:(id)arg1;
- (void)performEvaluation:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)serverSafeRecordInfoWithRecordInfo:(id)arg1;
- (bool)shouldDownloadAttachmentWithURL:(id)arg1 recipe:(id)arg2 recordInfo:(id)arg3;
- (id)telemetryWithRecordSet:(id)arg1;

@end
