
@interface ATXScorableTimeATXActivityTypeWrapper : NSObject <ATXScorableTimePeriodProtocol> {
    unsigned long long  _activityType;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *legacyScorableTimeIdentifier;
@property (nonatomic, readonly) NSString *scorableTimeIdentifier;
@property (readonly) Class superclass;

- (unsigned long long)activityType;
- (id)init;
- (id)initWithActivityType:(unsigned long long)arg1;
- (id)legacyScorableTimeIdentifier;
- (id)scorableTimeIdentifier;

@end
