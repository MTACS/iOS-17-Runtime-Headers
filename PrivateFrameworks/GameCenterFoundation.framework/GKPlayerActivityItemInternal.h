
@interface GKPlayerActivityItemInternal : GKInternalRepresentation {
    long long  _activityType;
    NSString * _instrumentationKey;
    long long  _layoutType;
    NSString * _message;
    GKPlayerActivityRelationships * _relationships;
    NSString * _scrollId;
    NSString * _summaryMessage;
    NSDate * _timeStamp;
    NSString * _uuid;
}

@property (nonatomic) long long activityType;
@property (nonatomic, retain) NSString *instrumentationKey;
@property (nonatomic) long long layoutType;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) GKPlayerActivityRelationships *relationships;
@property (nonatomic, retain) NSString *scrollId;
@property (nonatomic, retain) NSString *summaryMessage;
@property (nonatomic, retain) NSDate *timeStamp;
@property (nonatomic, retain) NSString *uuid;

+ (id)constantToTypeMap;
+ (id)secureCodedPropertyKeys;
+ (id)typeToConstantMap;
+ (id)typeToConstantMapMetrics;

- (void).cxx_destruct;
- (long long)activityType;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)instrumentationKey;
- (long long)layoutType;
- (id)message;
- (id)relationships;
- (id)scrollId;
- (void)setActivityType:(long long)arg1;
- (void)setInstrumentationKey:(id)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setRelationships:(id)arg1;
- (void)setScrollId:(id)arg1;
- (void)setSummaryMessage:(id)arg1;
- (void)setTimeStamp:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)summaryMessage;
- (id)timeStamp;
- (id)uuid;

@end
