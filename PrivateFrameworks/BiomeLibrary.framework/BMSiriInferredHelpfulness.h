
@interface BMSiriInferredHelpfulness : BMEventBase <BMStoreData> {
    bool  _hasInferredHelpfulnessScore;
    bool  _hasRaw_absoluteTimestamp;
    bool  _hasRestatementScore;
    double  _inferredHelpfulnessScore;
    NSString * _modelID;
    double  _raw_absoluteTimestamp;
    double  _restatementScore;
    NSString * _turnID;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasInferredHelpfulnessScore;
@property (nonatomic) bool hasRestatementScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double inferredHelpfulnessScore;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) double restatementScore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *turnID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasInferredHelpfulnessScore;
- (bool)hasRestatementScore;
- (double)inferredHelpfulnessScore;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 inferredHelpfulnessScore:(id)arg2 restatementScore:(id)arg3 turnID:(id)arg4 modelID:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)modelID;
- (double)restatementScore;
- (id)serialize;
- (void)setHasInferredHelpfulnessScore:(bool)arg1;
- (void)setHasRestatementScore:(bool)arg1;
- (id)turnID;
- (void)writeTo:(id)arg1;

@end
