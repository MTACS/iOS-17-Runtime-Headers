
@interface BMSiriMusic : BMEventBase <BMStoreData> {
    NSArray * _depSignals;
    BMSiriMusicInferenceTrainingIndependentSignals * _indepSignals;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *depSignals;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMSiriMusicInferenceTrainingIndependentSignals *indepSignals;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_depSignalsJSONArray;
- (unsigned int)dataVersion;
- (id)depSignals;
- (id)description;
- (id)indepSignals;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIndepSignals:(id)arg1 depSignals:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
