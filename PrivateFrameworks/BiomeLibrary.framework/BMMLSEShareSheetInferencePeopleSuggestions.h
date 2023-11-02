
@interface BMMLSEShareSheetInferencePeopleSuggestions : BMEventBase <BMStoreData> {
    NSString * _identifier;
    NSArray * _peopleSuggestions;
    NSString * _sourceBundleId;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *peopleSuggestions;
@property (nonatomic, readonly) NSString *sourceBundleId;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_peopleSuggestionsJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sourceBundleId:(id)arg2 peopleSuggestions:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)peopleSuggestions;
- (id)serialize;
- (id)sourceBundleId;
- (void)writeTo:(id)arg1;

@end
