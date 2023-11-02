
@interface C2MetricRequestOptions : NSObject {
    unsigned char  __allowsExpensiveAccess;
    unsigned char  __allowsPowerNapScheduling;
    NSString * __sourceApplicationBundleIdentifier;
    NSString * __sourceApplicationSecondaryIdentifier;
    unsigned char  _allowsCellularAccess;
    C2MetricOptions * _metricOptions;
    NSUUID * _metricUUID;
    NSNumber * _privacyProxyFailClosedOverride;
}

@property (nonatomic) unsigned char _allowsExpensiveAccess;
@property (nonatomic) unsigned char _allowsPowerNapScheduling;
@property (nonatomic, retain) NSString *_sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *_sourceApplicationSecondaryIdentifier;
@property (nonatomic) unsigned char allowsCellularAccess;
@property (nonatomic, retain) C2MetricOptions *metricOptions;
@property (nonatomic, retain) NSUUID *metricUUID;
@property (nonatomic) NSNumber *privacyProxyFailClosedOverride;

- (void).cxx_destruct;
- (unsigned char)_allowsExpensiveAccess;
- (unsigned char)_allowsPowerNapScheduling;
- (id)_sourceApplicationBundleIdentifier;
- (id)_sourceApplicationSecondaryIdentifier;
- (unsigned char)allowsCellularAccess;
- (id)init;
- (id)initWithRequestOptions:(id)arg1;
- (id)metricOptions;
- (id)metricRequestTransportOptions;
- (id)metricUUID;
- (id)privacyProxyFailClosedOverride;
- (void)setAllowsCellularAccess:(unsigned char)arg1;
- (void)setMetricOptions:(id)arg1;
- (void)setMetricUUID:(id)arg1;
- (void)setPrivacyProxyFailClosedOverride:(id)arg1;
- (void)set_allowsExpensiveAccess:(unsigned char)arg1;
- (void)set_allowsPowerNapScheduling:(unsigned char)arg1;
- (void)set_sourceApplicationBundleIdentifier:(id)arg1;
- (void)set_sourceApplicationSecondaryIdentifier:(id)arg1;

@end
