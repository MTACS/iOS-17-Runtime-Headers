
@interface STChildSetupController : NSObject {
    id /* block */  _completionHandler;
    id /* block */  _completionHandlerWithIntroductionModel;
    STRootViewModelCoordinator * _coordinator;
    UIViewController * _initialViewController;
    STIntroductionController * _introductionController;
}

@property (copy) id /* block */ completionHandler;
@property (copy) id /* block */ completionHandlerWithIntroductionModel;
@property (nonatomic, retain) STRootViewModelCoordinator *coordinator;
@property (nonatomic, readonly) UIViewController *initialViewController;
@property (nonatomic, retain) STIntroductionController *introductionController;

+ (bool)isCommunicationSafetyAlreadyEnabledForUser:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id /* block */)completionHandlerWithIntroductionModel;
- (id)coordinator;
- (id)initOnChildDeviceWithDSID:(id)arg1 childAge:(id)arg2;
- (id)initOnChildDeviceWithDSID:(id)arg1 childAge:(id)arg2 childName:(id)arg3;
- (id)initWithDSID:(id)arg1;
- (id)initWithDSID:(id)arg1 isChildDevice:(bool)arg2;
- (id)initWithDSID:(id)arg1 isChildDevice:(bool)arg2 childAge:(id)arg3 childName:(id)arg4 updateExistingSettings:(bool)arg5;
- (id)initWithDSID:(id)arg1 isChildDevice:(bool)arg2 updateExistingSettings:(bool)arg3;
- (id)initWithDSID:(id)arg1 updateExistingSettings:(bool)arg2;
- (id)initWithDSID:(id)arg1 updateExistingSettings:(bool)arg2 childAge:(id)arg3 childName:(id)arg4;
- (id)initialViewController;
- (id)introductionController;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandlerWithIntroductionModel:(id /* block */)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setIntroductionController:(id)arg1;

@end
