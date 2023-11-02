
@interface BMHumanUnderstandingPersonalInference : BMEventBase <BMStoreData> {
    double  _confidence;
    BMHumanUnderstandingPersonalInferenceFact * _fact;
    bool  _hasConfidence;
    bool  _hasModelVersion;
    unsigned int  _modelVersion;
    NSArray * _qualifiers;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMHumanUnderstandingPersonalInferenceFact *fact;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasModelVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int modelVersion;
@property (nonatomic, readonly) NSArray *qualifiers;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_qualifiersJSONArray;
- (double)confidence;
- (unsigned int)dataVersion;
- (id)description;
- (id)fact;
- (bool)hasConfidence;
- (bool)hasModelVersion;
- (id)initByReadFrom:(id)arg1;
- (id)initWithConfidence:(id)arg1 fact:(id)arg2 qualifiers:(id)arg3 modelVersion:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (unsigned int)modelVersion;
- (id)qualifiers;
- (id)serialize;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
