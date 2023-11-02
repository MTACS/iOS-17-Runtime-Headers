
@interface GetBloodPressureIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic) long long code;
@property (nonatomic) double diastolic;
@property (nonatomic) double diastolicMaximum;
@property (nonatomic) double diastolicMinimum;
@property (nonatomic, copy) NSDate *sampleEndDate;
@property (nonatomic, copy) NSDate *sampleStartDate;
@property (nonatomic) double systolic;
@property (nonatomic) double systolicMaximum;
@property (nonatomic) double systolicMinimum;
@property (nonatomic, copy) NSString *unit;

- (long long)code;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (void)setCode:(long long)arg1;

@end
