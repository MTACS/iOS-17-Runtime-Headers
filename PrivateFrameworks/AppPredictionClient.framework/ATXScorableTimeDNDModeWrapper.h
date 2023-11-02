
@interface ATXScorableTimeDNDModeWrapper : NSObject <ATXScorableTimePeriodProtocol> {
    DNDMode * _dndMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DNDMode *dndMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *legacyScorableTimeIdentifier;
@property (nonatomic, readonly) NSString *scorableTimeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dndMode;
- (id)init;
- (id)initWithDNDMode:(id)arg1;
- (id)legacyScorableTimeIdentifier;
- (id)scorableTimeIdentifier;

@end
