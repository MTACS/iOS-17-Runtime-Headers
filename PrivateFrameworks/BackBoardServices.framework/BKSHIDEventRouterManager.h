
@interface BKSHIDEventRouterManager : NSObject <BSDescriptionProviding, _BKSHIDEventRouterDelegate> {
    BKSHIDEventDeliveryManager * _deliveryManager;
    NSObject<OS_dispatch_queue> * _queue;
    <BSInvalidatable> * _queue_dispatchingRulesAssertion;
    bool  _queue_needsFlush;
    NSMutableArray * _queue_routers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *eventRouters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initWithDeliveryManager:(id)arg1;
- (void)_queue_flush;
- (void)_queue_routerDidChange:(id)arg1;
- (id)_queue_succinctDescriptionBuilder;
- (id)_targetForDestination:(long long)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)eventRouters;
- (id)init;
- (void)setEventRouters:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
