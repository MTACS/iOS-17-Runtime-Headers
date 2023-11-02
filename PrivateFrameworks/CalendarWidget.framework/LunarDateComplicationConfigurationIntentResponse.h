
@interface LunarDateComplicationConfigurationIntentResponse : INIntentResponse {
    void code;
}

@property (nonatomic) long long code;

- (long long)code;
- (id)init;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setCode:(long long)arg1;

@end
