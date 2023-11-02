
@interface BMPeopleSuggesterSiriNI : BMEventBase <BMStoreData> {
    NSString * _interactionId;
    NSArray * _rankedSuggestions;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *interactionId;
@property (nonatomic, readonly) NSArray *rankedSuggestions;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_rankedSuggestionsJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithInteractionId:(id)arg1 rankedSuggestions:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)interactionId;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)rankedSuggestions;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
