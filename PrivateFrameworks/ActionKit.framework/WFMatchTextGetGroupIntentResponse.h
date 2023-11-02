
@interface WFMatchTextGetGroupIntentResponse : INIntentResponse {
    long long  _code;
}

@property (nonatomic) long long code;
@property (nonatomic, copy) NSNumber *noMatchIndex;
@property (nonatomic, copy) NSNumber *rangeErrorGroupCount;
@property (nonatomic, copy) NSNumber *rangeErrorGroupNumber;
@property (nonatomic, copy) NSArray *text;

+ (id)noMatchIntentResponseWithNoMatchIndex:(id)arg1;
+ (id)rangeErrorIntentResponseWithRangeErrorGroupNumber:(id)arg1 rangeErrorGroupCount:(id)arg2;

- (long long)code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)setCode:(long long)arg1;

@end
