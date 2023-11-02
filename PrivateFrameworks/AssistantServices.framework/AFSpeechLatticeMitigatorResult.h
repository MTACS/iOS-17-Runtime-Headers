
@interface AFSpeechLatticeMitigatorResult : NSObject <NSCopying, NSSecureCoding> {
    float  _calibrationOffset;
    float  _calibrationScale;
    float  _score;
    float  _threshold;
    NSString * _version;
}

@property (nonatomic, readonly) float calibrationOffset;
@property (nonatomic, readonly) float calibrationScale;
@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) float threshold;
@property (nonatomic, readonly, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)calibrationOffset;
- (float)calibrationScale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1 score:(float)arg2 threshold:(float)arg3;
- (id)initWithResults:(id)arg1 score:(float)arg2 threshold:(float)arg3 calibrationScale:(float)arg4 calibrationOffset:(float)arg5;
- (float)score;
- (float)threshold;
- (id)version;

@end
