
@interface GKAuthenticateHostViewController : GKExtensionRemoteViewController <GKAuthenticateHostProtocol> {
    GKHostedAuthenticateViewController * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKHostedAuthenticateViewController *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)authenticateExtension;
+ (bool)dismissAutomaticallyAfterExtensionCompletion;

- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (id)delegate;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;
- (void)messageFromExtension:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
