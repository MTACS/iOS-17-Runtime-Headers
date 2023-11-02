
@interface _CLVLLocalizationResult : NSObject <NSCopying, NSSecureCoding> {
    float  _confidence;
    struct { 
        float v[6][6]; 
    }  _covariance;
    _CLVLLocalizationDebugInfo * _debugInfo;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*coordinate; 
    }  _location;
    double  _timestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (nonatomic) float confidence;
@property (nonatomic) struct { float x1[6][6]; } covariance;
@property (nonatomic, copy) _CLVLLocalizationDebugInfo *debugInfo;
@property (nonatomic) struct { double x1; } location;
@property (nonatomic) double timestamp;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

+ (bool)supportsSecureCoding;

- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { float x1[6][6]; })covariance;
- (void)dealloc;
- (id)debugInfo;
- (id)description;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 localizationResult:(id)arg2;
- (struct { double x1; })location;
- (void)setConfidence:(float)arg1;
- (void)setCovariance:(struct { float x1[6][6]; })arg1;
- (void)setDebugInfo:(id)arg1;
- (void)setLocation:(struct { double x1; })arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (double)timestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;

@end
