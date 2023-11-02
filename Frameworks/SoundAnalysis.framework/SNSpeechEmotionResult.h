
@interface SNSpeechEmotionResult : NSObject <NSCopying, NSSecureCoding, SNConfidenceProviding, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNTimeRangeProvidingWritable, SRSampling> {
    double  _arousal;
    double  _confidence;
    double  _dominance;
    NSString * _modelIdentifier;
    double  _mood;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
    double  _valence;
}

@property (readonly) double arousal;
@property (nonatomic) double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double dominance;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *modelIdentifier;
@property (readonly) double mood;
@property (readonly) Class superclass;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (readonly) double valence;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)arousal;
- (id)binarySampleRepresentation;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)dominance;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBinarySampleRepresentation:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithMood:(double)arg1 valence:(double)arg2 arousal:(double)arg3 dominance:(double)arg4;
- (bool)isEqual:(id)arg1;
- (id)modelIdentifier;
- (double)mood;
- (void)setConfidence:(double)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (double)valence;

@end
