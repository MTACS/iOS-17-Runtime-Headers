
@interface HMDNotificationConditionEvaluator : HMFObject <HMFLogging> {
    NSSet * _conditionHandlers;
}

@property (readonly) NSSet *conditionHandlers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)conditionHandlers;
- (bool)conditionsPass:(id)arg1 registrationUser:(id)arg2;
- (id)initWithConditionHandlers:(id)arg1;

@end
