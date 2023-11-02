
@interface BMMLSEPeopleSuggestionsMetricsStore : BMEventBase <BMStoreData> {
    NSString * _eventIdentifier;
    bool  _hasReciprocalRank;
    bool  _hasReciprocalRankDefinitionVersion;
    NSString * _model;
    double  _reciprocalRank;
    unsigned int  _reciprocalRankDefinitionVersion;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic) bool hasReciprocalRank;
@property (nonatomic) bool hasReciprocalRankDefinitionVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) double reciprocalRank;
@property (nonatomic, readonly) unsigned int reciprocalRankDefinitionVersion;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)eventIdentifier;
- (bool)hasReciprocalRank;
- (bool)hasReciprocalRankDefinitionVersion;
- (id)initByReadFrom:(id)arg1;
- (id)initWithEventIdentifier:(id)arg1 model:(id)arg2 reciprocalRank:(id)arg3 reciprocalRankDefinitionVersion:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)model;
- (double)reciprocalRank;
- (unsigned int)reciprocalRankDefinitionVersion;
- (id)serialize;
- (void)setHasReciprocalRank:(bool)arg1;
- (void)setHasReciprocalRankDefinitionVersion:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
