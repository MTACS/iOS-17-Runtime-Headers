
@interface BKUIPasscodeEntryController : OBPasscodeViewController <OBPasscodeViewControllerDelegate> {
    id /* block */  _passcodeEntryAction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ passcodeEntryAction;
@property (readonly) Class superclass;

+ (bool)isDevicePasscodeSet;

- (void).cxx_destruct;
- (void)cancelPasscodeEntry;
- (id)completionButtonTitleForPasscodeViewController:(id)arg1;
- (id)initWithVerifiedPasscodeAction:(id /* block */)arg1;
- (bool)isModalInPresentation;
- (id /* block */)passcodeEntryAction;
- (void)passcodeViewController:(id)arg1 didEnterPasscode:(id)arg2;
- (bool)passcodeViewController:(id)arg1 shouldEnableCompletionButtonForPasscode:(id)arg2;
- (void)setPasscodeEntryAction:(id /* block */)arg1;
- (void)setUnlockScreenType:(int)arg1 simplePasscodeType:(int)arg2;
- (int)simplePasscodeType;
- (int)unlockType;
- (bool)verifyPasscode:(id)arg1;
- (void)viewDidLoad;

@end
