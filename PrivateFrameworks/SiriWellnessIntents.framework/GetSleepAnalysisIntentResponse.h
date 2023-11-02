
@interface GetSleepAnalysisIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic) double averageAsleepDuration;
@property (nonatomic) double averageInBedDuration;
@property (nonatomic) long long code;
@property (nonatomic) long long daysSummarized;
@property (nonatomic) long long daysWithAsleepData;
@property (nonatomic, copy) NSDate *summaryEndDate;
@property (nonatomic, copy) NSDate *summaryStartDate;
@property (nonatomic) double totalAsleepDuration;
@property (nonatomic) double totalInBedDuration;

- (long long)code;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (void)setCode:(long long)arg1;

@end
