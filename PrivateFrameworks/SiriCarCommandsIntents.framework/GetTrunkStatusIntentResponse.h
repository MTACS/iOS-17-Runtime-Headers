
@interface GetTrunkStatusIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic) long long code;
@property (nonatomic) long long trunkStatus;

- (long long)code;
- (id)init;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setCode:(long long)arg1;

@end
