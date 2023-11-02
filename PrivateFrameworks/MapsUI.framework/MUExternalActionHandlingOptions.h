
@interface MUExternalActionHandlingOptions : NSObject {
    NSString * _analyticsEventValue;
    long long  _analyticsModuleType;
    int  _analyticsTarget;
}

@property (nonatomic, copy) NSString *analyticsEventValue;
@property (nonatomic) long long analyticsModuleType;
@property (nonatomic) int analyticsTarget;

- (void).cxx_destruct;
- (id)analyticsEventValue;
- (long long)analyticsModuleType;
- (int)analyticsTarget;
- (void)setAnalyticsEventValue:(id)arg1;
- (void)setAnalyticsModuleType:(long long)arg1;
- (void)setAnalyticsTarget:(int)arg1;

@end
