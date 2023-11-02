
@interface GetHealthQuantityIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic) double average;
@property (nonatomic) long long code;
@property (nonatomic) double maximum;
@property (nonatomic) double minimum;
@property (nonatomic) double mostRecent;
@property (nonatomic, copy) NSDate *sampleEndDate;
@property (nonatomic, copy) NSDate *sampleStartDate;
@property (nonatomic) double total;
@property (nonatomic, copy) NSString *unit;

- (long long)code;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (void)setCode:(long long)arg1;

@end
