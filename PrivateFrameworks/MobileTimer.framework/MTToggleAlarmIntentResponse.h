
@interface MTToggleAlarmIntentResponse : INIntentResponse {
    long long  _code;
}

@property (nonatomic, copy) MTIntentAlarm *alarm;
@property (nonatomic) long long code;
@property (nonatomic) long long state;

+ (id)continueInAppIntentResponseWithState:(long long)arg1;
+ (id)failureRequiringAppLaunchIntentResponseWithState:(long long)arg1;
+ (id)inProgressIntentResponseWithState:(long long)arg1;
+ (id)readyIntentResponseWithState:(long long)arg1;
+ (id)successIntentResponseWithState:(long long)arg1 alarm:(id)arg2;
+ (id)unspecifiedIntentResponseWithState:(long long)arg1;

- (long long)code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)setCode:(long long)arg1;

@end
