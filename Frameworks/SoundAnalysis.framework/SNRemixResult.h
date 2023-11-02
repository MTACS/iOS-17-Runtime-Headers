
@interface SNRemixResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProviding, SNTimeRangeProvidingWritable> {
    float  _ambienceGain_dB;
    float  _ambienceLoudness;
    float  _dialogueLoudness;
    float  _recordingLoudness;
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
}

@property (readonly) SNRemixAggregateResult *aggregateResult;
@property (nonatomic) float ambienceGain_dB;
@property (nonatomic) float ambienceLoudness;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float dialogueLoudness;
@property (readonly) unsigned long long hash;
@property (nonatomic) float recordingLoudness;
@property (readonly) Class superclass;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (bool)supportsSecureCoding;

- (id)aggregateResult;
- (float)ambienceGain_dB;
- (float)ambienceLoudness;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)dialogueLoudness;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)recordingLoudness;
- (void)setAmbienceGain_dB:(float)arg1;
- (void)setAmbienceLoudness:(float)arg1;
- (void)setDialogueLoudness:(float)arg1;
- (void)setRecordingLoudness:(float)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
