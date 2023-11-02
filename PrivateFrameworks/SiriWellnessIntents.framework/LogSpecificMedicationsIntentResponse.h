
@interface LogSpecificMedicationsIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic) long long code;
@property (nonatomic, retain) NSNumber *dosage;
@property (nonatomic, copy) NSString *dosageUnit;
@property (nonatomic, copy) NSArray *matchingMeds;
@property (nonatomic, copy) NSArray *matchingMedsBeforeUpdate;
@property (nonatomic, copy) NSArray *matchingSchedules;
@property (nonatomic, retain) NSNumber *medCount;
@property (nonatomic, copy) NSString *medName;
@property (nonatomic, copy) NSString *medSchedule;
@property (nonatomic, retain) NSNumber *strength;
@property (nonatomic, copy) NSString *strengthUnit;

- (long long)code;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (void)setCode:(long long)arg1;

@end
