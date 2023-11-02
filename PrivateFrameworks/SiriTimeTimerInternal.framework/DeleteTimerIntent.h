
@interface DeleteTimerIntent : INIntent

@property (nonatomic, copy) NSArray *allAvailableTargets;
@property (nonatomic, retain) SiriDevice *associatedDeviceTarget;
@property (nonatomic, retain) SiriTimer *targetTimer;
@property (nonatomic, retain) SiriRemoteTimerTarget *targetingInfo;

+ (bool)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
