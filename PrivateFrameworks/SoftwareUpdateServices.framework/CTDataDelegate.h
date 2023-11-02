
@interface CTDataDelegate : NSObject <CoreTelephonyClientDataDelegate> {
    CoreTelephonyClient * _client;
    NSObject<OS_dispatch_queue> * _initiationQueue;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)_initCTClient;
- (id)getCTClient;
- (id)getPreferredDataSubscriptionContext;
- (id)init;
- (void)preferredDataSimChanged:(id)arg1;

@end
