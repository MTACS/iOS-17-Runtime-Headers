
@interface HMTriggerBuilder : HMTrigger <HMTriggerBuilder, HMTriggerBuilderInternal, HMTriggerBuilderPrivate>

@property (nonatomic, copy) NSArray *actionSets;
@property (nonatomic, readonly, copy) NSString *configuredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool nameIsConfigured;
@property (nonatomic, retain) HMTriggerPolicy *policy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMActionSetBuilder *triggerOwnedActionSet;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (id)alloc;

@end
