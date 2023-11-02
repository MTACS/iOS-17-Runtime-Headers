
@interface MOSubscriber : NSObject

- (id)initSubscriber;
- (void)receiveCompletion:(id)arg1;
- (unsigned long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;

@end
