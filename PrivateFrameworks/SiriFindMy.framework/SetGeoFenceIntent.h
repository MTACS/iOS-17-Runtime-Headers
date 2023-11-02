
@interface SetGeoFenceIntent : INIntent

@property (nonatomic) long long action;
@property (nonatomic, retain) INFriend *friend;
@property (nonatomic, retain) SpeakableLocation *location;
@property (nonatomic, retain) NSNumber *notifyMe;
@property (nonatomic, retain) NSNumber *notifyOnce;
@property (nonatomic) long long trigger;

+ (bool)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
