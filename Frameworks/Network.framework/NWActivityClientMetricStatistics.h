
@interface NWActivityClientMetricStatistics : NSObject {
    NSUUID * _activityUUID;
    NSString * _bundleID;
    NSDictionary * _dictionaryRepresentation;
    NSUUID * _externallyVisibleActivityUUID;
    NSData * _metricData;
    struct nw_activity_client_metric_report_s { 
        unsigned char activity_uuid[16]; 
        BOOL client_metric_name[256]; 
        BOOL client_metric[5000]; 
        unsigned char __pad[0]; 
    }  _report;
}

@property (nonatomic, retain) NSUUID *activityUUID;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) NSDictionary *clientMetric;
@property (nonatomic, retain) NSString *clientMetricName;
@property (nonatomic, retain) NSString *clientMetricString;
@property (nonatomic, retain) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) NSUUID *externallyVisibleActivityUUID;
@property (nonatomic, retain) NSData *metricData;
@property (nonatomic) struct nw_activity_client_metric_report_s { unsigned char x1[16]; BOOL x2[256]; BOOL x3[5000]; unsigned char x4[0]; } report;

- (void).cxx_destruct;
- (id)activityUUID;
- (id)bundleID;
- (id)clientMetric;
- (id)clientMetricName;
- (id)clientMetricString;
- (id)dictionaryRepresentation;
- (id)externallyVisibleActivityUUID;
- (id)initWithData:(id)arg1;
- (id)initWithNWActivityClientMetricReport:(struct nw_activity_client_metric_report_s { unsigned char x1[16]; BOOL x2[256]; BOOL x3[5000]; unsigned char x4[0]; }*)arg1 length:(unsigned long long)arg2;
- (id)metricData;
- (struct nw_activity_client_metric_report_s { unsigned char x1[16]; BOOL x2[256]; BOOL x3[5000]; unsigned char x4[0]; })report;
- (void)setActivityUUID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setClientMetricName:(id)arg1;
- (void)setClientMetricString:(id)arg1;
- (void)setDictionaryRepresentation:(id)arg1;
- (void)setExternallyVisibleActivityUUID:(id)arg1;
- (void)setMetricData:(id)arg1;
- (void)setReport:(struct nw_activity_client_metric_report_s { unsigned char x1[16]; BOOL x2[256]; BOOL x3[5000]; unsigned char x4[0]; })arg1;

@end
