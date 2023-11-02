
@interface AMSBadgeRequest : NSObject <NSSecureCoding> {
    NSDictionary * _actionMetricsEvent;
    NSString * _badgeIdentifier;
    NSString * _bundleIdentifier;
    bool  _enabled;
    NSDictionary * _metrics;
}

@property (nonatomic, readonly) NSDictionary *actionMetricsEvent;
@property (nonatomic, readonly) NSString *badgeIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSDictionary *metrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionMetricsEvent;
- (id)badgeIdentifier;
- (id)bundleIdentifier;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPushPayload:(id)arg1;
- (id)metrics;

@end
