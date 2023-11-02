
@interface APPCMetric : NSObject <APPCMetricable> {
    void clientIdentifier;
    void contentId;
    void deviceIdentifier;
    void metric;
    void properties;
    void purpose;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timestamp;
    void userIdentifier;
}

@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *contentId;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic) long long metric;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic) long long purpose;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSString *userIdentifier;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)contentId;
- (id)deviceIdentifier;
- (id)init;
- (long long)metric;
- (id)properties;
- (long long)purpose;
- (void)setClientIdentifier:(id)arg1;
- (void)setContentId:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setMetric:(long long)arg1;
- (void)setProperties:(id)arg1;
- (void)setPurpose:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (id)timestamp;
- (id)userIdentifier;

@end
