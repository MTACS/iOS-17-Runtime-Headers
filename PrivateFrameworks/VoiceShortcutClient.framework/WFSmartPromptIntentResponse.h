
@interface WFSmartPromptIntentResponse : INIntentResponse {
    long long  _code;
}

@property (nonatomic, copy) NSNumber *authorizationResult;
@property (nonatomic) long long code;

- (long long)code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)setCode:(long long)arg1;

@end
