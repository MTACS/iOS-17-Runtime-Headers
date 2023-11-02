
@interface LAPSPasscodeChangeUIAdapter : NSObject <LAPSFetchNewPasscodeViewControllerDelegate, LAPSFetchOldPasscodeViewControllerDelegate, LAPSPasscodeChangeUI> {
    LAPSPasscodeChangeUIAdapterOptions * _options;
    LAPSPasscodeChangeUIPresentationController * _presentationController;
    <LAPSPasscodeChangeUIDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LAPSPasscodeChangeUIDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_presentPasscodeDoesNotMeetRequirementsError:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentPasscodeIsTooSimpleErrorWithCompletion:(id /* block */)arg1;
- (void)_presentPasscodesDidNotMatchErrorWithCompletion:(id /* block */)arg1;
- (void)deactivateWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (void)fetchNewPasscode:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchNewPasscodeViewController:(id)arg1 verifyPasscode:(id)arg2;
- (void)fetchNewPasscodeViewController:(id)arg1 verifyPasscode:(id)arg2 matchesPasscode:(id)arg3;
- (void)fetchOldPasscode:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchOldPasscodeViewController:(id)arg1 backoffMessageForTimeout:(long long)arg2;
- (void)fetchOldPasscodeViewController:(id)arg1 verifyPasscode:(id)arg2;
- (id)initWithParentVC:(id)arg1;
- (id)initWithParentVC:(id)arg1 options:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
