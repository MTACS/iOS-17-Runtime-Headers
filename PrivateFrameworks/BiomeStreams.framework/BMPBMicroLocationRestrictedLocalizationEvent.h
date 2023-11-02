
@interface BMPBMicroLocationRestrictedLocalizationEvent : PBCodable <NSCopying> {
    double  _absoluteTimeStamp;
    NSString * _clientBundleId;
    struct { 
        unsigned int absoluteTimeStamp : 1; 
        unsigned int maxProbability : 1; 
    }  _has;
    double  _maxProbability;
    NSString * _maxProbabilityLabel;
    NSMutableArray * _numDevicesVectors;
    NSMutableArray * _probabilityVectors;
}

@property (nonatomic) double absoluteTimeStamp;
@property (nonatomic, retain) NSString *clientBundleId;
@property (nonatomic) bool hasAbsoluteTimeStamp;
@property (nonatomic, readonly) bool hasClientBundleId;
@property (nonatomic) bool hasMaxProbability;
@property (nonatomic, readonly) bool hasMaxProbabilityLabel;
@property (nonatomic) double maxProbability;
@property (nonatomic, retain) NSString *maxProbabilityLabel;
@property (nonatomic, retain) NSMutableArray *numDevicesVectors;
@property (nonatomic, retain) NSMutableArray *probabilityVectors;

+ (Class)numDevicesVectorType;
+ (Class)probabilityVectorType;

- (void).cxx_destruct;
- (double)absoluteTimeStamp;
- (void)addNumDevicesVector:(id)arg1;
- (void)addProbabilityVector:(id)arg1;
- (void)clearNumDevicesVectors;
- (void)clearProbabilityVectors;
- (id)clientBundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteTimeStamp;
- (bool)hasClientBundleId;
- (bool)hasMaxProbability;
- (bool)hasMaxProbabilityLabel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)maxProbability;
- (id)maxProbabilityLabel;
- (void)mergeFrom:(id)arg1;
- (id)numDevicesVectorAtIndex:(unsigned long long)arg1;
- (id)numDevicesVectors;
- (unsigned long long)numDevicesVectorsCount;
- (id)probabilityVectorAtIndex:(unsigned long long)arg1;
- (id)probabilityVectors;
- (unsigned long long)probabilityVectorsCount;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteTimeStamp:(double)arg1;
- (void)setClientBundleId:(id)arg1;
- (void)setHasAbsoluteTimeStamp:(bool)arg1;
- (void)setHasMaxProbability:(bool)arg1;
- (void)setMaxProbability:(double)arg1;
- (void)setMaxProbabilityLabel:(id)arg1;
- (void)setNumDevicesVectors:(id)arg1;
- (void)setProbabilityVectors:(id)arg1;
- (void)writeTo:(id)arg1;

@end
