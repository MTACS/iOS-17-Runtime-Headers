
@interface NWActivityStatistics : NSObject {
    NSUUID * _activityUUID;
    NSDictionary * _deviceReport;
    NSMutableDictionary * _dictionaryReport;
    NSUUID * _externallyVisibleActivityUUID;
    NSUUID * _externallyVisibleParentUUID;
    NSDictionary * _layer2Report;
    unsigned char  _metricType;
    NSUUID * _parentUUID;
    struct nw_activity_report_s { 
        unsigned long long investigation_identifier; 
        unsigned int domain; 
        unsigned int label; 
        unsigned char activity_uuid[16]; 
        unsigned char parent_activity_uuid[16]; 
        BOOL bundle_id[256]; 
        unsigned int retry : 1; 
        unsigned int __pad_bits : 7; 
        unsigned char __pad[7]; 
    }  _report;
}

@property (nonatomic, retain) NSUUID *activityUUID;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSDictionary *deviceReport;
@property (nonatomic, retain) NSMutableDictionary *dictionaryReport;
@property (nonatomic, readonly) unsigned int domain;
@property (nonatomic, retain) NSUUID *externallyVisibleActivityUUID;
@property (nonatomic, retain) NSUUID *externallyVisibleParentUUID;
@property (nonatomic, readonly) unsigned long long investigation_identifier;
@property (nonatomic, readonly) unsigned int label;
@property (nonatomic, retain) NSDictionary *layer2Report;
@property (nonatomic) unsigned char metricType;
@property (nonatomic, retain) NSUUID *parentUUID;
@property (nonatomic) struct nw_activity_report_s { unsigned long long x1; unsigned int x2; unsigned int x3; unsigned char x4[16]; unsigned char x5[16]; BOOL x6[256]; unsigned int x7 : 1; unsigned int x8 : 7; unsigned char x9[7]; } report;
@property (nonatomic, readonly) bool retry;

+ (id)createActivityReportDictionary:(struct nw_activity_report_s { unsigned long long x1; unsigned int x2; unsigned int x3; unsigned char x4[16]; unsigned char x5[16]; BOOL x6[256]; unsigned int x7 : 1; unsigned int x8 : 7; unsigned char x9[7]; })arg1 uuidString:(id)arg2 parentUUIDString:(id)arg3;

- (void).cxx_destruct;
- (id)activityUUID;
- (id)bundleID;
- (id)deviceReport;
- (id)dictionaryReport;
- (unsigned int)domain;
- (id)externallyVisibleActivityUUID;
- (id)externallyVisibleParentUUID;
- (id)initWithJSONData:(id)arg1;
- (id)initWithNWActivityReport:(struct nw_activity_report_s { unsigned long long x1; unsigned int x2; unsigned int x3; unsigned char x4[16]; unsigned char x5[16]; BOOL x6[256]; unsigned int x7 : 1; unsigned int x8 : 7; unsigned char x9[7]; }*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)investigation_identifier;
- (unsigned int)label;
- (id)layer2Report;
- (unsigned char)metricType;
- (id)parentUUID;
- (struct nw_activity_report_s { unsigned long long x1; unsigned int x2; unsigned int x3; unsigned char x4[16]; unsigned char x5[16]; BOOL x6[256]; unsigned int x7 : 1; unsigned int x8 : 7; unsigned char x9[7]; })report;
- (bool)retry;
- (void)setActivityUUID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDeviceReport:(id)arg1;
- (void)setDictionaryReport:(id)arg1;
- (void)setExternallyVisibleActivityUUID:(id)arg1;
- (void)setExternallyVisibleParentUUID:(id)arg1;
- (void)setLayer2Report:(id)arg1;
- (void)setMetricType:(unsigned char)arg1;
- (void)setParentUUID:(id)arg1;
- (void)setReport:(struct nw_activity_report_s { unsigned long long x1; unsigned int x2; unsigned int x3; unsigned char x4[16]; unsigned char x5[16]; BOOL x6[256]; unsigned int x7 : 1; unsigned int x8 : 7; unsigned char x9[7]; })arg1;

@end
