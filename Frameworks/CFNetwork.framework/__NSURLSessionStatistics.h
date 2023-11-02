
@interface __NSURLSessionStatistics : NSObject {
    NSMutableDictionary * _dictionaryReport;
    NSArray * _externallyVisibleConnectionUUIDs;
    NSUUID * _externallyVisibleNwActivity;
    void * report;
}

@property (nonatomic, readonly) NSArray *connectionUUIDS;
@property (nonatomic, readonly) NSMutableDictionary *dictionaryReport;
@property (retain) NSArray *externallyVisibleConnectionUUIDs;
@property (retain) NSUUID *externallyVisibleNwActivity;
@property (nonatomic, readonly) NSUUID *nwActivity;
@property (nonatomic, readonly) NSUUID *taskUUID;

+ (struct CFNetworkTaskMetrics_s { unsigned long long x1; unsigned long long x2; unsigned long long x3; long long x4; long long x5; long long x6; unsigned long long x7; unsigned long long x8; unsigned char x9[16]; unsigned char x10[16]; int x11; bool x12; struct { unsigned long long x_13_1_1; unsigned long long x_13_1_2; unsigned long long x_13_1_3; unsigned long long x_13_1_4; unsigned long long x_13_1_5; unsigned long long x_13_1_6; unsigned char x_13_1_7[16]; long long x_13_1_8; long long x_13_1_9; long long x_13_1_10; int x_13_1_11; bool x_13_1_12; bool x_13_1_13; bool x_13_1_14; bool x_13_1_15; long long x_13_1_16; } x13[0]; }*)createCFNetworkTaskMetrics_s:(id)arg1;
+ (void)reportMetricsToSymptoms:(id)arg1;

- (void).cxx_destruct;
- (id)connectionUUIDS;
- (void)dealloc;
- (id)dictionaryReport;
- (id)externallyVisibleConnectionUUIDs;
- (id)externallyVisibleNwActivity;
- (id)initWithCFNetworkReport:(void*)arg1 length:(long long)arg2;
- (id)initWithJSONData:(id)arg1;
- (id)nwActivity;
- (void)setExternallyVisibleConnectionUUIDs:(id)arg1;
- (void)setExternallyVisibleNwActivity:(id)arg1;
- (id)taskUUID;

@end
