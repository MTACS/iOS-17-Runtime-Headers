
@interface CRCAttestationManager : NSObject <NSProgressReporting, NSURLSessionDelegate> {
    NSProgress * progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)challengeComponentsWith:(id)arg1 challengeResponse:(id*)arg2 error:(id*)arg3;
- (bool)getStrongComponentsWithError:(id*)arg1 resultobtained:(id*)arg2;
- (id)init;
- (void)issueClientCertificateWithCompletionOnQueue:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (id)progress;
- (bool)sendCertIssueRequestWith:(id)arg1 serverCertResponse:(id*)arg2 error:(id*)arg3;
- (bool)sendChallengeRequestWith:(id)arg1 serverResponse:(id*)arg2 error:(id*)arg3;
- (bool)transformChallengeResponseWithError:(id*)arg1 blockChallengeResponse:(id)arg2 resultobtained:(id*)arg3;
- (bool)transformServerCertResponseUsing:(id)arg1 serverCertResponseArray:(id*)arg2 error:(id*)arg3;
- (bool)transformStrongWithError:(id*)arg1 blockComponents:(id)arg2 resultobtained:(id*)arg3;

@end
