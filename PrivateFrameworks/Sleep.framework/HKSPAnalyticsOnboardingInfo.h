
@interface HKSPAnalyticsOnboardingInfo : NSObject {
    unsigned long long  _action;
    unsigned long long  _entryPoint;
    unsigned long long  _step;
}

@property (nonatomic, readonly) unsigned long long action;
@property (nonatomic, readonly) unsigned long long entryPoint;
@property (nonatomic, readonly) unsigned long long step;

- (unsigned long long)action;
- (id)actionPayloadValue;
- (unsigned long long)entryPoint;
- (id)entryPointPayloadValue;
- (id)initWithStep:(unsigned long long)arg1 action:(unsigned long long)arg2 entryPoint:(unsigned long long)arg3;
- (unsigned long long)step;
- (id)stepPayloadValue;

@end
