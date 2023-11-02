
@interface NewsEngagement.EngagementInlineViewManager : NSObject <AMSUIMessageViewControllerDelegate> {
    void engagementBannerLayoutStore;
    void featureSettings;
    void inlineDialogViewControllerFactory;
    void state;
}

- (void).cxx_destruct;
- (id)init;
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)messageViewController:(id)arg1 didLoadDialogRequest:(id)arg2;
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize { double x1; double x2; })arg2;

@end
