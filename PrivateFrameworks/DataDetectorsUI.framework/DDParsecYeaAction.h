
@interface DDParsecYeaAction : DDParsecAction

- (id)createViewController;
- (id)feedbackListener;
- (bool)hasUserInterface;
- (id)localizedName;
- (void)performFromView:(id)arg1;
- (void)prepareViewControllerForActionController:(id)arg1;
- (unsigned long long)relevancy;
- (void)report;

@end
