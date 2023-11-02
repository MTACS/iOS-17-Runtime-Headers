
@interface SRNotificationUsage : NSObject <NSSecureCoding, SRSampleExporting> {
    NSString * _bundleIdentifier;
    long long  _event;
}

@property (copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)notificationUsageWithBundleIdentifier:(id)arg1 eventType:(long long)arg2;
+ (bool)supportsSecureCoding;

- (id)bundleIdentifier;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)event;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setEvent:(long long)arg1;
- (id)sr_dictionaryRepresentation;

@end
