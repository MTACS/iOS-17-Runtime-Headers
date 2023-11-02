
@interface BMMicroLocationLocalization : BMEventBase <BMStoreData> {
    NSString * _clientBundleID;
    bool  _hasMaxProbability;
    bool  _hasRaw_absoluteTimeStamp;
    double  _maxProbability;
    NSString * _maxProbabilityLabel;
    NSArray * _numDevicesVector;
    NSArray * _probabilityVector;
    double  _raw_absoluteTimeStamp;
}

@property (nonatomic, readonly) NSDate *absoluteTimeStamp;
@property (nonatomic, readonly) NSString *clientBundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasMaxProbability;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maxProbability;
@property (nonatomic, readonly) NSString *maxProbabilityLabel;
@property (nonatomic, readonly) NSArray *numDevicesVector;
@property (nonatomic, readonly) NSArray *probabilityVector;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_numDevicesVectorJSONArray;
- (id)_probabilityVectorJSONArray;
- (id)absoluteTimeStamp;
- (id)clientBundleID;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasMaxProbability;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimeStamp:(id)arg1 clientBundleID:(id)arg2 maxProbabilityLabel:(id)arg3 maxProbability:(id)arg4 probabilityVector:(id)arg5 numDevicesVector:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (double)maxProbability;
- (id)maxProbabilityLabel;
- (id)numDevicesVector;
- (id)probabilityVector;
- (id)serialize;
- (void)setHasMaxProbability:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
