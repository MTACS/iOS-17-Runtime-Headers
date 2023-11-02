
@protocol PLAssetJobExecutor <NSObject>

@required

- (bool)executeCreationRequestWithBatchJobDictionaries:(NSArray *)arg1 jobSuccess:(bool*)arg2 jobError:(id*)arg3;
- (bool)executeCreationRequestWithJobDict:(NSDictionary *)arg1 jobSuccess:(bool*)arg2 jobError:(id*)arg3;

@end
