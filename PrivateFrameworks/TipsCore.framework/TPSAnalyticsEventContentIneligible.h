
@interface TPSAnalyticsEventContentIneligible : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _context;
    NSString * _correlationID;
    unsigned long long  _displayCount;
    unsigned long long  _displayType;
    long long  _reason;
    NSString * _tipID;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) NSString *correlationID;
@property (nonatomic) unsigned long long displayCount;
@property (nonatomic, readonly) unsigned long long displayType;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSString *tipID;

+ (id)eventWithTipID:(id)arg1 correlationID:(id)arg2 bundleID:(id)arg3 context:(id)arg4 displayType:(unsigned long long)arg5 reason:(long long)arg6 date:(id)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTipID:(id)arg1 correlationID:(id)arg2 bundleID:(id)arg3 context:(id)arg4 displayType:(unsigned long long)arg5 reason:(long long)arg6 date:(id)arg7;
- (id)bundleID;
- (id)context;
- (id)correlationID;
- (unsigned long long)displayCount;
- (unsigned long long)displayType;
- (id)duetEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (long long)reason;
- (void)setDataProvider:(id)arg1;
- (void)setDisplayCount:(unsigned long long)arg1;
- (id)tipID;

@end
