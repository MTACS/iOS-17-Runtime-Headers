
@interface NFPowerAssertion : NSObject {
    NSMutableDictionary * _assertionHolders;
    bool  _enableDebug;
    NSObject<OS_os_transaction> * _powerAssertTransaction;
    unsigned int  _powerNotificationConnection;
    unsigned int  _powerNotificationNotifier;
    struct IONotificationPort { } * _powerNotificationPort;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) bool enableDebug;

+ (id)sharedPowerAssertion;

- (void).cxx_destruct;
- (id)assertionHolders;
- (id)dumpState;
- (bool)enableDebug;
- (void)holdPowerAssertion:(id)arg1;
- (void)holdPowerAssertion:(id)arg1 onBehalfOf:(int)arg2;
- (id)init;
- (void)releasePowerAssertion:(id)arg1;
- (void)setEnableDebug:(bool)arg1;

@end
