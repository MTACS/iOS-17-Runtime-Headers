
@interface BMLocationMicroLocationVisitProbabilityPerLocation : BMEventBase <BMStoreData> {
    bool  _hasProbability;
    NSString * _microLocationIdentifier;
    double  _probability;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasProbability;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *microLocationIdentifier;
@property (nonatomic, readonly) double probability;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasProbability;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithMicroLocationIdentifier:(id)arg1 probability:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)microLocationIdentifier;
- (double)probability;
- (id)serialize;
- (void)setHasProbability:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
