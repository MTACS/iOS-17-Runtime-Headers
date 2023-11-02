
@interface _ANECompilerAnalytics : NSObject {
    NSData * _analyticsBuffer;
    NSNumber * _bufferSizeInBytes;
    NSArray * _procedureAnalytics;
}

@property (nonatomic, readonly) NSData *analyticsBuffer;
@property (nonatomic, readonly) NSNumber *bufferSizeInBytes;
@property (nonatomic, retain) NSArray *procedureAnalytics;

+ (id)new;
+ (id)objectWithBuffer:(id)arg1;

- (void).cxx_destruct;
- (id)analyticsBuffer;
- (id)bufferSizeInBytes;
- (struct _AnalyticsData { unsigned int x1; unsigned int x2; BOOL x3[0]; }*)dataInfoAt:(unsigned long long)arg1;
- (id)description;
- (bool)getBOOLDataValueAt:(unsigned long long)arg1;
- (unsigned long long)getDataValueAt:(unsigned long long)arg1;
- (struct _AnalyticsGroupInfo { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned long long x4; }*)groupInfoAt:(unsigned long long)arg1;
- (id)init;
- (id)initWithBuffer:(id)arg1;
- (struct _AnalyticsLayerInfo { BOOL x1[64]; BOOL x2[64]; float x3; }*)layerInfoAt:(unsigned long long)arg1;
- (unsigned long long*)offsetTableAt:(unsigned long long)arg1 count:(unsigned int)arg2;
- (bool)populateAnalytics;
- (id)procedureAnalytics;
- (struct _AnalyticsProcedureInfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned long long x6; unsigned int x7; unsigned long long x8; }*)procedureInfoAt:(unsigned long long)arg1;
- (id)serialize;
- (void)setProcedureAnalytics:(id)arg1;
- (id)stringForAnalyticsType:(unsigned int)arg1;
- (struct _AnalyticsTaskInfo { unsigned int x1; unsigned long long x2; }*)taskInfoAt:(unsigned long long)arg1;

@end
