
@interface BPSSubscriptionStatus : NSObject {
    long long  _state;
    BPSSubscription * _subscription;
}

@property (nonatomic) long long state;
@property (nonatomic, retain) BPSSubscription *subscription;

+ (id)awaitingSubscription;
+ (id)subscribedWithSubscription:(id)arg1;
+ (id)terminal;

- (void).cxx_destruct;
- (id)initWithState:(long long)arg1 subscription:(id)arg2;
- (void)setState:(long long)arg1;
- (void)setSubscription:(id)arg1;
- (long long)state;
- (id)subscription;

@end
