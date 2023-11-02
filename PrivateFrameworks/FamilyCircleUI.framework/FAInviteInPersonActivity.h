
@interface FAInviteInPersonActivity : UIActivity {
    UIViewController * _presentingViewController;
    NSDictionary * _response;
}

@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) NSDictionary *response;

- (void).cxx_destruct;
- (void)_handleRUIDismiss:(id)arg1;
- (void)_notifyCompletionWithSuccess:(bool)arg1 userInfo:(id)arg2;
- (long long)activityCategory;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)performActivity;
- (id)presentingViewController;
- (id)response;
- (void)setPresentingViewController:(id)arg1;
- (void)setResponse:(id)arg1;

@end
