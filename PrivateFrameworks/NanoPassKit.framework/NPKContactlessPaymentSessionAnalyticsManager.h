
@interface NPKContactlessPaymentSessionAnalyticsManager : NSObject <NPKContactlessPaymentSessionManagerObserver> {
    NSObject<OS_dispatch_queue> * _analyticsQueue;
    NPKContactlessPaymentSessionState * _previousState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NPKContactlessPaymentSessionState *previousState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)contactlessPaymentSessionManager:(id)arg1 didChangeSessionState:(id)arg2;
- (id)init;
- (id)previousState;
- (void)setPreviousState:(id)arg1;

@end
