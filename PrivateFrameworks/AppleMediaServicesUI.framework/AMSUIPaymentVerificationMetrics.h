
@interface AMSUIPaymentVerificationMetrics : NSObject {
    NSString * _appID;
    <AMSBagProtocol> * _bag;
    NSString * _displayReason;
}

@property (nonatomic, retain) NSString *appID;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSString *displayReason;

+ (id)_event;
+ (id)_metricsInstanceWithBag:(id)arg1;

- (void).cxx_destruct;
- (id)_propertiesWithPageId:(id)arg1 displayReason:(id)arg2;
- (id)_propertiesWithTargetId:(id)arg1 pageId:(id)arg2 displayReason:(id)arg3;
- (id)appID;
- (id)bag;
- (id)displayReason;
- (void)enqueueEventWithPageId:(id)arg1 displayReason:(id)arg2;
- (void)enqueueEventWithTargetId:(id)arg1 pageId:(id)arg2 displayReason:(id)arg3;
- (void)flushEvents;
- (id)initWithBag:(id)arg1 appID:(id)arg2;
- (void)setAppID:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setDisplayReason:(id)arg1;

@end
