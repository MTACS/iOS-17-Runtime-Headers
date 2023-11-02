
@interface SKATransientSubscriptionAssertion : NSObject {
    NSObject<OS_os_activity> * _osActivity;
    NSString * _subscriptionIdentifier;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *osActivity;
@property (nonatomic, readonly, copy) NSString *subscriptionIdentifier;

+ (id)logger;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSubscriptionIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransientSubscription:(id)arg1;
- (id)osActivity;
- (id)subscriptionIdentifier;

@end
