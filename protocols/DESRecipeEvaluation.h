
@protocol DESRecipeEvaluation <NSObject>

@optional

- (NSDictionary *)evaluateRecipe:(DESRecipe *)arg1 matchingRecordSet:(DESRecordSet *)arg2 binaryResult:(id*)arg3 error:(id*)arg4;
- (NSDictionary *)evaluateRecipe:(DESRecipe *)arg1 matchingRecordSet:(DESRecordSet *)arg2 error:(id*)arg3;
- (NSDictionary *)evaluateRecipe:(NSDictionary *)arg1 recordInfo:(NSDictionary *)arg2 recordData:(NSData *)arg3 attachments:(NSArray *)arg4 error:(id*)arg5;
- (void)performEvaluation:(DESRecipeEvaluationSession *)arg1;
- (NSDictionary *)serverSafeRecordInfoWithRecordInfo:(NSDictionary *)arg1;
- (bool)shouldDownloadAttachmentWithURL:(NSURL *)arg1 recipe:(NSDictionary *)arg2 recordInfo:(NSDictionary *)arg3;
- (NSDictionary *)telemetryWithRecordSet:(DESRecordSet *)arg1;

@end
