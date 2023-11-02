
@interface TPSAnalyticsEventTipTapped : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _context;
    NSString * _correlationID;
    unsigned long long  _displayType;
    NSString * _tipID;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *context;
@property (nonatomic, retain) NSString *correlationID;
@property (nonatomic, readonly) unsigned long long displayType;
@property (nonatomic, retain) NSString *tipID;

+ (id)eventWithTipID:(id)arg1 correlationID:(id)arg2;
+ (id)eventWithTipID:(id)arg1 correlationID:(id)arg2 bundleID:(id)arg3 context:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTipID:(id)arg1 correlationID:(id)arg2;
- (id)_initWithTipID:(id)arg1 correlationID:(id)arg2 bundleID:(id)arg3 context:(id)arg4;
- (id)bundleID;
- (id)context;
- (id)correlationID;
- (unsigned long long)displayType;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (void)setBundleID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCorrelationID:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setTipID:(id)arg1;
- (id)tipID;

@end
