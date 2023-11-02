
@interface GKChallengeIssueHostViewController : GKExtensionRemoteViewController <GKChallengeIssueHostProtocol> {
    GKHostedChallengeIssueController * _delegateWeak;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKHostedChallengeIssueController *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)challengeExtension;

- (void).cxx_destruct;
- (id)delegate;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)messageFromExtension:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
