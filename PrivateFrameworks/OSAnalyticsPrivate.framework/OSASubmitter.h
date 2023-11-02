
@interface OSASubmitter : NSObject {
    bool  _allowUnsignedBlobs;
    NSString * _connectionType;
    bool  _dryRun;
    NSArray * _internalWhitelist;
    unsigned int  _jobCount;
    NSDictionary * _launchInfo;
    long long  _responseCode;
    NSData * _responseData;
    NSError * _responseError;
    NSDictionary * _responseHeaders;
}

@property bool allowUnsignedBlobs;
@property (copy) NSString *connectionType;
@property (copy) NSArray *internalWhitelist;
@property (copy) NSDictionary *launchInfo;
@property (readonly) NSURL *submissionURL;

+ (id)extractAuthenticatedBlob:(id)arg1 error:(id*)arg2;
+ (id)submissionPathsWithHomeDirectory:(id)arg1;

- (void).cxx_destruct;
- (void)abort;
- (bool)allowUnsignedBlobs;
- (id)applyTasking:(id)arg1 taskId:(id)arg2 usingConfig:(id)arg3 fromBlob:(id)arg4;
- (bool)cheaterTaskingWithSets:(id)arg1 usingConfig:(id)arg2 resultsCallback:(id /* block */)arg3;
- (id)connectionType;
- (id)getAdditionalRequestHeaders;
- (id)init;
- (id)internalWhitelist;
- (id)launchInfo;
- (id)locateLog:(id)arg1 forRouting:(id)arg2 usingConfig:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (void)postContent:(id)arg1 withHeaders:(id)arg2;
- (void)prefaceSubmission:(id)arg1 withData:(id)arg2 usingArchive:(id)arg3 andHeaders:(id)arg4;
- (void)prepConfig:(id)arg1;
- (id)primarySubmissionPaths;
- (id)processJob:(id)arg1 forRouting:(id)arg2 including:(id)arg3 usingConfig:(id)arg4 taskings:(id)arg5 summarize:(id)arg6 additionalRequestHeaders:(id)arg7;
- (id)processSubmissionJobs:(id)arg1 usingConfig:(id)arg2 summarize:(id)arg3;
- (void)setAllowUnsignedBlobs:(bool)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setInternalWhitelist:(id)arg1;
- (void)setLaunchInfo:(id)arg1;
- (id)submissionURL;
- (bool)submitLogsUsingPolicy:(id)arg1 resultsCallback:(id /* block */)arg2;
- (id)taskingLastSuccessfulRequest;
- (bool)taskingNeedsRefreshForRouting:(id)arg1 at:(double)arg2;
- (void)updateTaskingLastSuccessfulRequest:(id)arg1 at:(double)arg2;

@end
