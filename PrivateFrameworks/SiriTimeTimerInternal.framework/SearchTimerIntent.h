
@interface SearchTimerIntent : INIntent

@property (nonatomic, copy) NSArray *allAvailableTargets;
@property (nonatomic, retain) SiriDevice *associatedDeviceTarget;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSNumber *includeRemoteTimers;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long state;
@property (nonatomic, retain) SiriRemoteTimerTarget *targetingInfo;
@property (nonatomic) long long type;

+ (bool)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
