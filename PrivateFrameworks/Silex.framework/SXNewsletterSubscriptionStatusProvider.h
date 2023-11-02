
@interface SXNewsletterSubscriptionStatusProvider : NSObject <SXNewsletterSubscriptionStatusProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long newsletterSubscriptionStatus;
@property (readonly) Class superclass;

- (void)addObserver:(id)arg1;
- (unsigned long long)newsletterSubscriptionStatus;
- (void)removeObserver:(id)arg1;

@end
