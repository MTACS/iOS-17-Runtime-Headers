
@interface BMSiriRequestCountsMetadata : BMEventBase <BMStoreData> {
    bool  _hasRaw_aggregationWindowStartTimestamp;
    NSString * _odmId;
    double  _raw_aggregationWindowStartTimestamp;
    int  _schedule;
}

@property (nonatomic, readonly) NSDate *aggregationWindowStartTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *odmId;
@property (nonatomic, readonly) int schedule;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)aggregationWindowStartTimestamp;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSchedule:(int)arg1 aggregationWindowStartTimestamp:(id)arg2 odmId:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)odmId;
- (int)schedule;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
