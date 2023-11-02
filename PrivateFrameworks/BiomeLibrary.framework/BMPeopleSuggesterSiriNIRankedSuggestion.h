
@interface BMPeopleSuggesterSiriNIRankedSuggestion : BMEventBase <BMStoreData> {
    NSString * _contactFamilyName;
    NSString * _contactGivenName;
    NSString * _contactId;
    bool  _hasRank;
    bool  _hasScore;
    NSString * _modelName;
    NSString * _modelVersion;
    int  _rank;
    double  _score;
}

@property (nonatomic, readonly) NSString *contactFamilyName;
@property (nonatomic, readonly) NSString *contactGivenName;
@property (nonatomic, readonly) NSString *contactId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasRank;
@property (nonatomic) bool hasScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *modelVersion;
@property (nonatomic, readonly) int rank;
@property (nonatomic, readonly) double score;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)contactFamilyName;
- (id)contactGivenName;
- (id)contactId;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasRank;
- (bool)hasScore;
- (id)initByReadFrom:(id)arg1;
- (id)initWithContactId:(id)arg1 contactGivenName:(id)arg2 contactFamilyName:(id)arg3 score:(id)arg4 rank:(id)arg5 modelName:(id)arg6 modelVersion:(id)arg7;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)modelName;
- (id)modelVersion;
- (int)rank;
- (double)score;
- (id)serialize;
- (void)setHasRank:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
