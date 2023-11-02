
@interface VideosUI.JSAppleMusicSubscription : VUIJSObject <VideosUI.JSAppleMusicSubscriptionInterface> {
    void musicSubscriptionStatusController;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAppContext:(id)arg1;
- (void)musicSubscriptionStatusHasChanged;
- (void)refreshAppleMusicSubscriptionStatusWithJsCallback:(id)arg1;

@end
