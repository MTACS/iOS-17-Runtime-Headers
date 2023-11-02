
@interface BMMLSEShareSheetInferencePeopleSuggestionsPeopleSuggestionModelIdentifier : BMEventBase <BMStoreData> {
    int  _modelType;
    NSString * _otherModelTypeName;
    BMTrialIdentifier * _trialIdentifier;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int modelType;
@property (nonatomic, readonly) NSString *otherModelTypeName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMTrialIdentifier *trialIdentifier;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithModelType:(int)arg1 trialIdentifier:(id)arg2 otherModelTypeName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)modelType;
- (id)otherModelTypeName;
- (id)serialize;
- (id)trialIdentifier;
- (void)writeTo:(id)arg1;

@end
