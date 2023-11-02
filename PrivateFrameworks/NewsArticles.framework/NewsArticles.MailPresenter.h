
@interface NewsArticles.MailPresenter : NSObject <MFMailComposeViewControllerDelegate, SXMailPresenter> {
    void host;
    void viewControllerPresenting;
}

- (void).cxx_destruct;
- (bool)canComposeMail;
- (id)init;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)presentMail:(id)arg1;

@end
