
@interface NewsArticles.NewsletterSubscriptionStatusProvider : NSObject <FCNewsletterSubscriptionObserver, SXNewsletterSubscriptionStatusProviding> {
    void newsletterManager;
    void observers;
}

@property (nonatomic, readonly) unsigned long long newsletterSubscriptionStatus;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)newsletterSubscriptionChangedFromSubscription:(long long)arg1;
- (unsigned long long)newsletterSubscriptionStatus;
- (void)removeObserver:(id)arg1;

@end
