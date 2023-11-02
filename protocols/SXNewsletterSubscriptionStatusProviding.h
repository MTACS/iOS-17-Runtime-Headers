
@protocol SXNewsletterSubscriptionStatusProviding <NSObject>

@required

- (void)addObserver:(id <SXNewsletterSubscriptionStatusObserving>)arg1;
- (unsigned long long)newsletterSubscriptionStatus;
- (void)removeObserver:(id <SXNewsletterSubscriptionStatusObserving>)arg1;

@end
