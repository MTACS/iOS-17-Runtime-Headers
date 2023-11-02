
@interface TPSAnalyticsEventTipDismissed : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _context;
    NSString * _correlationID;
    NSString * _dismissType;
    unsigned long long  _displayCount;
    double  _timeToDismissal;
    NSString * _tipID;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) NSString *correlationID;
@property (nonatomic, readonly) NSString *dismissType;
@property (nonatomic) unsigned long long displayCount;
@property (nonatomic) double timeToDismissal;
@property (nonatomic, readonly) NSString *tipID;

+ (id)eventWithTipID:(id)arg1 correlationID:(id)arg2 bundleID:(id)arg3 context:(id)arg4 dismissType:(id)arg5 timeToDismissal:(double)arg6 date:(id)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTipID:(id)arg1 correlationID:(id)arg2 bundleID:(id)arg3 context:(id)arg4 dismissType:(id)arg5 timeToDismissal:(double)arg6 date:(id)arg7;
- (id)bundleID;
- (id)context;
- (id)correlationID;
- (id)dismissType;
- (unsigned long long)displayCount;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (void)setDataProvider:(id)arg1;
- (void)setDisplayCount:(unsigned long long)arg1;
- (void)setTimeToDismissal:(double)arg1;
- (double)timeToDismissal;
- (id)tipID;

@end
