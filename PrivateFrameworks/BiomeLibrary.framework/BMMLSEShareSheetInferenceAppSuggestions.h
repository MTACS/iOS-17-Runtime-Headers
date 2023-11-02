
@interface BMMLSEShareSheetInferenceAppSuggestions : BMEventBase <BMStoreData> {
    NSArray * _appSuggestions;
    NSString * _identifier;
    NSString * _sourceBundleId;
}

@property (nonatomic, readonly) NSArray *appSuggestions;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *sourceBundleId;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_appSuggestionsJSONArray;
- (id)appSuggestions;
- (unsigned int)dataVersion;
- (id)description;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sourceBundleId:(id)arg2 appSuggestions:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)sourceBundleId;
- (void)writeTo:(id)arg1;

@end
