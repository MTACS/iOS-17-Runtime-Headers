
@interface PPTopicTransform : NSObject {
    unsigned char  _activationType;
    float  _attenuationFactor;
    const float * _bias;
    NSData * _data;
    unsigned char  _featureNormalizationType;
    float  _featureScalingFactor;
    unsigned char  _featureScalingType;
    float  _featureSmoothingFactor;
    unsigned char  _featureSmoothingType;
    struct header_s { 
        unsigned int qidCount; 
        unsigned int topicCount; 
        unsigned int nonzeroCount; 
        unsigned int payloadLen; 
    }  _header;
    const float * _matrixElts;
    const unsigned int * _matrixIndices;
    float  _outputScalingFactor;
    unsigned char  _outputScalingType;
    const char * _payloads;
    const unsigned int * _qids;
    float  _threshold;
}

@property (nonatomic, readonly) unsigned long long outputTopicCount;
@property (nonatomic, readonly) float threshold;

- (void).cxx_destruct;
- (id)QIDWeightsWithMappedTopicIdentifier:(id)arg1;
- (void)addBias:(float*)arg1;
- (void)addWeightedTopicScoreToBuffer:(float*)arg1 countNonZeroComponentsInBuffer:(unsigned short*)arg2 qid:(unsigned int)arg3 score:(float)arg4;
- (void)addWeightedTopicScoreToBuffer:(float*)arg1 qid:(unsigned int)arg2 score:(float)arg3;
- (void)applyFeatureNormalization:(float*)arg1 vectorLength:(int)arg2;
- (void)applyFeatureScaling:(float*)arg1 vectorLength:(int)arg2;
- (void)applyFeatureSmoothing:(float*)arg1 vectorLength:(int)arg2;
- (void)applyOutputActivation:(float*)arg1;
- (void)applyOutputAttenuation:(float*)arg1 nonzeroCounts:(unsigned short*)arg2;
- (void)applyOutputScaling:(float*)arg1 vectorLength:(int)arg2;
- (bool)containsMappedTopic:(id)arg1;
- (id)init;
- (id)initWithPath:(id)arg1 mappingId:(id)arg2;
- (unsigned long long)outputTopicCount;
- (id)payloadForTopic:(unsigned int)arg1;
- (float)threshold;

@end
