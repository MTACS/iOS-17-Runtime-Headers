
@interface ATXNotificationEventMetric : _ATXCoreAnalyticsMetric {
    NSString * _bundleId;
    long long  _deliveryMethod;
    NSString * _destinationReason;
    NSString * _finalDestination;
    NSString * _handleModeIdentifier;
    bool  _isMessage;
    NSString * _originalDestination;
    NSString * _receiveModeIdentifier;
    long long  _resolutionType;
    double  _timeToResolution;
    long long  _urgency;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) long long deliveryMethod;
@property (nonatomic, retain) NSString *destinationReason;
@property (nonatomic, retain) NSString *finalDestination;
@property (nonatomic, retain) NSString *handleModeIdentifier;
@property (nonatomic) bool isMessage;
@property (nonatomic, retain) NSString *originalDestination;
@property (nonatomic, retain) NSString *receiveModeIdentifier;
@property (nonatomic) long long resolutionType;
@property (nonatomic) double timeToResolution;
@property (nonatomic) long long urgency;

- (void).cxx_destruct;
- (id)bundleId;
- (id)coreAnalyticsDictionary;
- (long long)deliveryMethod;
- (id)destinationReason;
- (id)finalDestination;
- (id)handleModeIdentifier;
- (id)initWithQueryResult:(id)arg1 modeClient:(id)arg2;
- (bool)isMessage;
- (id)metricName;
- (id)originalDestination;
- (id)receiveModeIdentifier;
- (long long)resolutionType;
- (void)setBundleId:(id)arg1;
- (void)setDeliveryMethod:(long long)arg1;
- (void)setDestinationReason:(id)arg1;
- (void)setFinalDestination:(id)arg1;
- (void)setHandleModeIdentifier:(id)arg1;
- (void)setIsMessage:(bool)arg1;
- (void)setOriginalDestination:(id)arg1;
- (void)setReceiveModeIdentifier:(id)arg1;
- (void)setResolutionType:(long long)arg1;
- (void)setTimeToResolution:(double)arg1;
- (void)setUrgency:(long long)arg1;
- (double)timeToResolution;
- (long long)urgency;

@end
