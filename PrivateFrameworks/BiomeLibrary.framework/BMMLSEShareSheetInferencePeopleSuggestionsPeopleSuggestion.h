
@interface BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestion : BMEventBase <BMStoreData> {
    bool  _hasRank;
    bool  _hasScore;
    NSString * _identifier;
    NSString * _model;
    BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestionModelIdentifier * _modelIdentifier;
    unsigned int  _rank;
    double  _score;
    NSString * _transportBundleId;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasRank;
@property (nonatomic) bool hasScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestionModelIdentifier *modelIdentifier;
@property (nonatomic, readonly) unsigned int rank;
@property (nonatomic, readonly) double score;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *transportBundleId;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasRank;
- (bool)hasScore;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 model:(id)arg2 modelIdentifier:(id)arg3 transportBundleId:(id)arg4 rank:(id)arg5 score:(id)arg6;
- (id)initWithIdentifier:(id)arg1 model:(id)arg2 transportBundleId:(id)arg3 rank:(id)arg4 score:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)model;
- (id)modelIdentifier;
- (unsigned int)rank;
- (double)score;
- (id)serialize;
- (void)setHasRank:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (id)transportBundleId;
- (void)writeTo:(id)arg1;

@end
