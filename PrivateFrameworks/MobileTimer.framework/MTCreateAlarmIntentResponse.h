
@interface MTCreateAlarmIntentResponse : INIntentResponse {
    long long  _code;
}

@property (nonatomic, copy) MTIntentAlarm *alarm;
@property (nonatomic) long long code;

+ (id)successIntentResponseWithAlarm:(id)arg1;

- (long long)code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)setCode:(long long)arg1;

@end
