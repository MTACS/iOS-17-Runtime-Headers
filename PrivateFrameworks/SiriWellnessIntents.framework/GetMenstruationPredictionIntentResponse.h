
@interface GetMenstruationPredictionIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic) long long code;
@property (nonatomic, copy) NSDate *lastPeriodEnd;
@property (nonatomic, copy) NSString *lastPeriodFlow;
@property (nonatomic, copy) NSDate *lastPeriodStart;
@property (nonatomic, copy) NSDate *nextPeriodEnd;
@property (nonatomic, copy) NSDate *nextPeriodStart;

- (long long)code;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (void)setCode:(long long)arg1;

@end
