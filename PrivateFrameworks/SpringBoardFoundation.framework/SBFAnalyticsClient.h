
@interface SBFAnalyticsClient : NSObject {
    SBFAnalyticsBackend * _backend;
    NSString * _significantTimeChangedNotificationName;
}

@property (nonatomic, copy) NSString *significantTimeChangedNotificationName;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_noteSignificantTimeChanged:(id)arg1;
- (void)emitEvent:(unsigned long long)arg1;
- (void)emitEvent:(unsigned long long)arg1 withPayload:(id)arg2;
- (id)initWithBackend:(id)arg1;
- (void)registerForQueryName:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)setSignificantTimeChangedNotificationName:(id)arg1;
- (id)significantTimeChangedNotificationName;

@end
