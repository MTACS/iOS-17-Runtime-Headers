
@interface VLLocalizationResult : NSObject <NSCopying, NSSecureCoding> {
    float  _confidence;
    struct { 
        float v[6][6]; 
    }  _covariance;
    VLLocalizationDebugInfo * _debugInfo;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*coordinate; 
    }  _location;
    double  _timestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) struct { float x1[6][6]; } covariance;
@property (nonatomic, readonly) VLLocalizationDebugInfo *debugInfo;
@property (nonatomic, readonly) double inputTimestamp;
@property (nonatomic, readonly) struct { double x1; } location;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { float x1[6][6]; })covariance;
- (id)debugInfo;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 pose:(const struct { double x1[3][3]; double x2[3]; float x3; float x4[36]; }*)arg2 debugInfo:(id)arg3;
- (double)inputTimestamp;
- (bool)isEqual:(id)arg1;
- (struct { double x1; })location;
- (unsigned long long)timestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;

@end
