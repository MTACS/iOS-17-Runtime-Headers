
@interface BMContextualUnderstandingActivityInferenceInferredActivity : BMEventBase <BMStoreData> {
    int  _activityType;
    double  _confidence;
    bool  _hasConfidence;
}

@property (nonatomic, readonly) int activityType;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConfidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (int)activityType;
- (double)confidence;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasConfidence;
- (id)initByReadFrom:(id)arg1;
- (id)initWithActivityType:(int)arg1 confidence:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasConfidence:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
