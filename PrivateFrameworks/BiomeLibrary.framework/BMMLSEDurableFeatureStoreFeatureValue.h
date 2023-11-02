
@interface BMMLSEDurableFeatureStoreFeatureValue : BMEventBase <BMStoreData> {
    bool  _boolValue;
    double  _doubleValue;
    bool  _hasBoolValue;
    bool  _hasDoubleValue;
    bool  _hasIntValue;
    BMMLSEDurableFeatureStoreFeatureValueHistogram * _histogramValue;
    unsigned int  _intValue;
    NSString * _stringValue;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic) bool hasBoolValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIntValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMMLSEDurableFeatureStoreFeatureValueHistogram *histogramValue;
@property (nonatomic, readonly) unsigned int intValue;
@property (nonatomic, readonly) NSString *stringValue;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (bool)boolValue;
- (unsigned int)dataVersion;
- (id)description;
- (double)doubleValue;
- (bool)hasBoolValue;
- (bool)hasDoubleValue;
- (bool)hasIntValue;
- (id)histogramValue;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIntValue:(id)arg1 doubleValue:(id)arg2 stringValue:(id)arg3 boolValue:(id)arg4 histogramValue:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (unsigned int)intValue;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasBoolValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntValue:(bool)arg1;
- (id)stringValue;
- (void)writeTo:(id)arg1;

@end
