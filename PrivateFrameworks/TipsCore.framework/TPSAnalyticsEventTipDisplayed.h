
@interface TPSAnalyticsEventTipDisplayed : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _context;
    NSString * _correlationID;
    unsigned long long  _displayCount;
    unsigned long long  _displayType;
    TPSExperiment * _experiment;
    bool  _overrideHoldout;
    NSString * _tipID;
    unsigned long long  _usageFlags;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) NSString *correlationID;
@property (nonatomic) unsigned long long displayCount;
@property (nonatomic, readonly) unsigned long long displayType;
@property (nonatomic, readonly) TPSExperiment *experiment;
@property (nonatomic) bool overrideHoldout;
@property (nonatomic, readonly) NSString *tipID;
@property (nonatomic, readonly) unsigned long long usageFlags;

+ (id)eventWithTipID:(id)arg1 correlationID:(id)arg2 bundleID:(id)arg3 context:(id)arg4 displayType:(unsigned long long)arg5 usageFlags:(unsigned long long)arg6 experiment:(id)arg7 overrideHoldout:(bool)arg8 date:(id)arg9;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTipID:(id)arg1 correlationID:(id)arg2 bundleID:(id)arg3 context:(id)arg4 displayType:(unsigned long long)arg5 usageFlags:(unsigned long long)arg6 experiment:(id)arg7 overrideHoldout:(bool)arg8 date:(id)arg9;
- (id)bundleID;
- (id)context;
- (id)correlationID;
- (unsigned long long)displayCount;
- (unsigned long long)displayType;
- (id)duetEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)experiment;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (bool)overrideHoldout;
- (void)setDataProvider:(id)arg1;
- (void)setDisplayCount:(unsigned long long)arg1;
- (void)setOverrideHoldout:(bool)arg1;
- (id)tipID;
- (unsigned long long)usageFlags;

@end
