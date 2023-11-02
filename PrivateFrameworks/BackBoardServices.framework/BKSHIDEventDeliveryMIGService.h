
@interface BKSHIDEventDeliveryMIGService : NSObject <BKSHIDEventDeliveryService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)setBufferingPredicates:(id)arg1;
- (void)setDeferringRules:(id)arg1;
- (void)setDiscreteDispatchingRuleSets:(id)arg1;
- (void)setKeyCommandsDispatchingRules:(id)arg1;
- (void)setKeyCommandsRegistrations:(id)arg1;

@end
