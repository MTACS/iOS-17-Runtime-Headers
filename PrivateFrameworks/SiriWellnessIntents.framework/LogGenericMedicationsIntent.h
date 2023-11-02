
@interface LogGenericMedicationsIntent : INIntent

@property (nonatomic, retain) NSNumber *confirmedLogAsScheduled;
@property (nonatomic, retain) NSNumber *isTimeframeToday;
@property (nonatomic, retain) NSNumber *medStatus;
@property (nonatomic, retain) NSNumber *shouldOverwriteExistingStatuses;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
