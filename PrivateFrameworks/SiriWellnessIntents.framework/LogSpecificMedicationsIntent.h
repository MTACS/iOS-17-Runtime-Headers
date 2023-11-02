
@interface LogSpecificMedicationsIntent : INIntent

@property (nonatomic, retain) NSNumber *confirmedAsNeeded;
@property (nonatomic, retain) NSNumber *confirmedAsScheduled;
@property (nonatomic, retain) NSNumber *dosage;
@property (nonatomic, copy) NSString *dosageUnit;
@property (nonatomic, copy) NSDate *endTime;
@property (nonatomic, retain) NSNumber *hasMeridiem;
@property (nonatomic, retain) NSNumber *isAsNeeded;
@property (nonatomic, retain) NSNumber *logAsNeeded;
@property (nonatomic, retain) NSNumber *medStatus;
@property (nonatomic, copy) NSArray *medicationIDs;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *scheduleID;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic, retain) NSNumber *strength;
@property (nonatomic, copy) NSString *strengthUnit;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
