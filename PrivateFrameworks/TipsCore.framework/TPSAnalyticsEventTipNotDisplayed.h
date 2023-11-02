
@interface TPSAnalyticsEventTipNotDisplayed : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _context;
    NSString * _correlationID;
    NSString * _displayType;
    NSString * _reason;
    NSString * _tipID;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *context;
@property (nonatomic, readonly, copy) NSString *correlationID;
@property (nonatomic, readonly, copy) NSString *displayType;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly, copy) NSString *tipID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)context;
- (id)correlationID;
- (id)displayType;
- (id)duetEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)initWithReason:(id)arg1 lastOfferedTipID:(id)arg2 lastOfferedCorrelationID:(id)arg3 lastOfferedBundleID:(id)arg4 lastOfferedContext:(id)arg5;
- (id)initWithReason:(id)arg1 lastOfferedTipID:(id)arg2 lastOfferedCorrelationID:(id)arg3 lastOfferedBundleID:(id)arg4 lastOfferedContext:(id)arg5 date:(id)arg6;
- (id)initWithTipID:(id)arg1 correlationID:(id)arg2 bundleID:(id)arg3 reason:(long long)arg4 context:(id)arg5 date:(id)arg6;
- (id)initWithTipID:(id)arg1 correlationID:(id)arg2 bundleID:(id)arg3 reason:(id)arg4 context:(id)arg5 date:(id)arg6 displayType:(id)arg7;
- (id)initWithTipID:(id)arg1 correlationID:(id)arg2 reason:(long long)arg3 context:(id)arg4;
- (id)mutableAnalyticsEventRepresentation;
- (id)reason;
- (void)setDataProvider:(id)arg1;
- (id)tipID;

@end
