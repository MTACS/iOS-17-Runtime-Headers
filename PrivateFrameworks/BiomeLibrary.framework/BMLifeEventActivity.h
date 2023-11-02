
@interface BMLifeEventActivity : BMEventBase <BMStoreData> {
    BMLifeEventActivityActivitySource * _activitySource;
    int  _activityType;
    double  _confidence;
    bool  _hasConfidence;
    bool  _hasRaw_endDate;
    bool  _hasRaw_startDate;
    NSString * _identifier;
    NSArray * _members;
    BMLifeEventActivityMetadata * _metadata;
    double  _raw_endDate;
    double  _raw_startDate;
}

@property (nonatomic, readonly) BMLifeEventActivityActivitySource *activitySource;
@property (nonatomic, readonly) int activityType;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic) bool hasConfidence;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *members;
@property (nonatomic, readonly) BMLifeEventActivityMetadata *metadata;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_membersJSONArray;
- (id)activitySource;
- (int)activityType;
- (double)confidence;
- (unsigned int)dataVersion;
- (id)description;
- (id)endDate;
- (bool)hasConfidence;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 identifier:(id)arg3 activityType:(int)arg4 activitySource:(id)arg5 confidence:(id)arg6 members:(id)arg7 metadata:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)members;
- (id)metadata;
- (id)serialize;
- (void)setHasConfidence:(bool)arg1;
- (id)startDate;
- (void)writeTo:(id)arg1;

@end
