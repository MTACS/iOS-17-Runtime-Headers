
@interface BMMLSEShareSheetInferenceAppSuggestionsAppSuggestion : BMEventBase <BMStoreData> {
    bool  _hasRank;
    NSString * _model;
    unsigned int  _rank;
    NSString * _transportBundleId;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasRank;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) unsigned int rank;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *transportBundleId;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasRank;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTransportBundleId:(id)arg1 model:(id)arg2 rank:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)model;
- (unsigned int)rank;
- (id)serialize;
- (void)setHasRank:(bool)arg1;
- (id)transportBundleId;
- (void)writeTo:(id)arg1;

@end
