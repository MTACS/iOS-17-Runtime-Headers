
@interface SBPIPAnalyticsAssistant : NSObject {
    double  _activateDuration;
    double  _activationTimestamp;
    NSString * _analyticsIdentifier;
    NSString * _bundleIdentifier;
    long long  _contentType;
    id /* block */  _invalidationBlock;
    bool  _isAutoPIPEnabled;
}

@property (nonatomic, readonly) NSString *analyticsIdentifier;

- (void).cxx_destruct;
- (id)_generateMutableAnalyticsPayload;
- (id)analyticsIdentifier;
- (id)generateAnalyticsPayload;
- (id)initWithBundleIdentifier:(id)arg1 contentType:(long long)arg2 isAutoPIPEnabled:(bool)arg3 invalidationBlock:(id /* block */)arg4;
- (void)invalidate;
- (void)noteBecameActiveAtTime:(double)arg1;
- (void)noteBecameInactiveAtTime:(double)arg1;

@end
