
@interface AMDService : NSObject

+ (id)sendReplyForBatchPEC:(id)arg1 requestError:(id)arg2 uuid:(id)arg3 error:(id*)arg4;
+ (id)sendReplyForBatchPIR:(id)arg1 requestError:(id)arg2 keywords:(id)arg3 uuid:(id)arg4 error:(id*)arg5;
+ (id)sendReplyForPIRData:(id)arg1 requestError:(id)arg2 keyword:(id)arg3 uuid:(id)arg4 error:(id*)arg5;

@end
