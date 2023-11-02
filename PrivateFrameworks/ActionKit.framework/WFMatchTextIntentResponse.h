
@interface WFMatchTextIntentResponse : INIntentResponse {
    long long  _code;
}

@property (nonatomic) long long code;
@property (nonatomic, copy) NSString *errorDescription;
@property (nonatomic, copy) NSArray *matches;

+ (id)invalidRegularExpressionIntentResponseWithErrorDescription:(id)arg1;

- (long long)code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)setCode:(long long)arg1;

@end
