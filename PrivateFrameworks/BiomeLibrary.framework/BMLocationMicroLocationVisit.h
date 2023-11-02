
@interface BMLocationMicroLocationVisit : BMEventBase <BMStoreData> {
    NSString * _domain;
    bool  _hasIsStable;
    bool  _hasMaxProbability;
    bool  _isStable;
    double  _maxProbability;
    NSString * _maxProbabilityMicroLocationIdentifier;
    NSArray * _numDevicesVector;
    NSArray * _probabilityVector;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic) bool hasIsStable;
@property (nonatomic) bool hasMaxProbability;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isStable;
@property (nonatomic, readonly) double maxProbability;
@property (nonatomic, readonly) NSString *maxProbabilityMicroLocationIdentifier;
@property (nonatomic, readonly) NSArray *numDevicesVector;
@property (nonatomic, readonly) NSArray *probabilityVector;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_numDevicesVectorJSONArray;
- (id)_probabilityVectorJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)domain;
- (bool)hasIsStable;
- (bool)hasMaxProbability;
- (id)initByReadFrom:(id)arg1;
- (id)initWithDomain:(id)arg1 maxProbabilityMicroLocationIdentifier:(id)arg2 maxProbability:(id)arg3 probabilityVector:(id)arg4 isStable:(id)arg5 numDevicesVector:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isStable;
- (id)jsonDictionary;
- (double)maxProbability;
- (id)maxProbabilityMicroLocationIdentifier;
- (id)numDevicesVector;
- (id)probabilityVector;
- (id)serialize;
- (void)setHasIsStable:(bool)arg1;
- (void)setHasMaxProbability:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
