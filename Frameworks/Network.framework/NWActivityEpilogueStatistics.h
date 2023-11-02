
@interface NWActivityEpilogueStatistics : NSObject {
    NSUUID * _activityUUID;
    NSDictionary * _deviceReport;
    NSMutableDictionary * _dictionaryReport;
    NSUUID * _externallyVisibleActivityUUID;
    NSUUID * _externallyVisibleParentUUID;
    NSDictionary * _layer2Report;
    unsigned char  _metricType;
    NSUUID * _parentUUID;
    struct nw_activity_epilogue_report_s { 
        unsigned long long duration_msecs; 
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
        } activity; 
        unsigned int fragments_quenched; 
        int underlying_error_domain; 
        int underlying_error_code; 
        int completion_reason; 
        unsigned char __pad[0]; 
    }  _report;
}

@property (nonatomic, retain) NSUUID *activityUUID;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) int completionReason;
@property (nonatomic, retain) NSDictionary *deviceReport;
@property (nonatomic, retain) NSMutableDictionary *dictionaryReport;
@property (nonatomic, readonly) unsigned int domain;
@property (nonatomic, readonly) unsigned long long durationMsecs;
@property (nonatomic, retain) NSUUID *externallyVisibleActivityUUID;
@property (nonatomic, retain) NSUUID *externallyVisibleParentUUID;
@property (nonatomic, readonly) unsigned int fragmentsQuenched;
@property (nonatomic, readonly) unsigned long long investigation_identifier;
@property (nonatomic, readonly) unsigned int label;
@property (nonatomic, retain) NSDictionary *layer2Report;
@property (nonatomic) unsigned char metricType;
@property (nonatomic, retain) NSUUID *parentUUID;
@property (nonatomic) struct nw_activity_epilogue_report_s { unsigned long long x1; struct nw_activity_report_s { unsigned long long x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned char x_2_1_4[16]; unsigned char x_2_1_5[16]; BOOL x_2_1_6[256]; unsigned int x_2_1_7 : 1; unsigned int x_2_1_8 : 7; unsigned char x_2_1_9[7]; } x2; unsigned int x3; int x4; int x5; int x6; unsigned char x7[0]; } report;
@property (nonatomic, readonly) bool retry;
@property (nonatomic, readonly) int underlyingErrorCode;
@property (nonatomic, readonly) int underlyingErrorDomain;

+ (id)createActivityEpilogueDictionary:(struct nw_activity_epilogue_report_s { unsigned long long x1; struct nw_activity_report_s { unsigned long long x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned char x_2_1_4[16]; unsigned char x_2_1_5[16]; BOOL x_2_1_6[256]; unsigned int x_2_1_7 : 1; unsigned int x_2_1_8 : 7; unsigned char x_2_1_9[7]; } x2; unsigned int x3; int x4; int x5; int x6; unsigned char x7[0]; })arg1;

- (void).cxx_destruct;
- (id)activityUUID;
- (id)bundleID;
- (int)completionReason;
- (id)deviceReport;
- (id)dictionaryReport;
- (unsigned int)domain;
- (unsigned long long)durationMsecs;
- (id)externallyVisibleActivityUUID;
- (id)externallyVisibleParentUUID;
- (unsigned int)fragmentsQuenched;
- (id)initWithJSONData:(id)arg1;
- (id)initWithNWActivityEpilogueReport:(struct nw_activity_epilogue_report_s { unsigned long long x1; struct nw_activity_report_s { unsigned long long x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned char x_2_1_4[16]; unsigned char x_2_1_5[16]; BOOL x_2_1_6[256]; unsigned int x_2_1_7 : 1; unsigned int x_2_1_8 : 7; unsigned char x_2_1_9[7]; } x2; unsigned int x3; int x4; int x5; int x6; unsigned char x7[0]; }*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)investigation_identifier;
- (unsigned int)label;
- (id)layer2Report;
- (unsigned char)metricType;
- (id)parentUUID;
- (struct nw_activity_epilogue_report_s { unsigned long long x1; struct nw_activity_report_s { unsigned long long x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned char x_2_1_4[16]; unsigned char x_2_1_5[16]; BOOL x_2_1_6[256]; unsigned int x_2_1_7 : 1; unsigned int x_2_1_8 : 7; unsigned char x_2_1_9[7]; } x2; unsigned int x3; int x4; int x5; int x6; unsigned char x7[0]; })report;
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
- (void)setReport:(struct nw_activity_epilogue_report_s { unsigned long long x1; struct nw_activity_report_s { unsigned long long x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned char x_2_1_4[16]; unsigned char x_2_1_5[16]; BOOL x_2_1_6[256]; unsigned int x_2_1_7 : 1; unsigned int x_2_1_8 : 7; unsigned char x_2_1_9[7]; } x2; unsigned int x3; int x4; int x5; int x6; unsigned char x7[0]; })arg1;
- (int)underlyingErrorCode;
- (int)underlyingErrorDomain;

@end
