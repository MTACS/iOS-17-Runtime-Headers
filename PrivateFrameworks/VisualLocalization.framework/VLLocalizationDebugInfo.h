
@interface VLLocalizationDebugInfo : NSObject <NSSecureCoding> {
    GEOVLFLocation * _analyticsLocation;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    double  _duration;
    double  _exposureTargetOffset;
    void _gravity;
    bool  _hasResultPose;
    struct { 
        double trueHeading; 
        double accuracy; 
    }  _heading;
    NSUUID * _identifier;
    NSData * _imageData;
    struct { 
        double pos_geoc[3]; 
        float horz_accuracy; 
        int is_vl_fused; 
        int type; 
    }  _location;
    double  _monotonicTimestamp;
    void _radialDistortion;
    float  _resultConfidence;
    struct { 
        float v[6][6]; 
    }  _resultCovariance;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*coordinate; 
    }  _resultLocation;
    unsigned long long  _resultStatus;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _resultTransform;
    _VLStatistics * _statistics;
    double  _timestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (getter=_cameraIntrinsics, nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (getter=_exposureTargetOffset, nonatomic, readonly) double exposureTargetOffset;
@property (getter=_fusedConfidences, nonatomic, readonly) float*fusedConfidences;
@property (getter=_gravity, nonatomic, readonly) void gravity;
@property (getter=_heading, nonatomic, readonly) struct { double x1; double x2; } heading;
@property (getter=_inlierIndices, nonatomic, readonly) int*inlierIndices;
@property (nonatomic, readonly) unsigned long long inliersCount;
@property (getter=_location, nonatomic, readonly) struct { double x1[3]; float x2; int x3; int x4; } location;
@property (nonatomic, readonly) NSData *pngData;
@property (nonatomic, readonly) float*points2D;
@property (nonatomic, readonly) double*points3D;
@property (getter=_radialDistortion, nonatomic, readonly) void radialDistortion;
@property (getter=_resultStatus, nonatomic, readonly) unsigned long long resultStatus;
@property (getter=_solutionsCount, nonatomic, readonly) unsigned long long solutionsCount;
@property (getter=_solverConfidences, nonatomic, readonly) float*solverConfidences;
@property (getter=_timestamp, nonatomic, readonly) double timestamp;
@property (getter=_transform, nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_cameraIntrinsics;
- (double)_exposureTargetOffset;
- (float*)_fusedConfidences;
- (void)_gravity;
- (struct { double x1; double x2; })_heading;
- (int*)_inlierIndices;
- (struct { double x1[3]; float x2; int x3; int x4; })_location;
- (void)_radialDistortion;
- (unsigned long long)_resultStatus;
- (unsigned long long)_solutionsCount;
- (float*)_solverConfidences;
- (double)_timestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_transform;
- (id)analyticsInformationWithSessionStartMonotonicTime:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPixelBuffer:(void *)arg1 monotonicTimestamp:(void *)arg2 timestamp:(void *)arg3 duration:(void *)arg4 location:(void *)arg5 clLocation:(void *)arg6 heading:(void *)arg7 gravity:(void *)arg8 transform:(void *)arg9 cameraIntrinsics:(void *)arg10 radialDistortion:(void *)arg11 exposureTargetOffset:(void *)arg12 statistics:(void *)arg13 resultStatus:(void *)arg14 resultPose:(void *)arg15 preserveImageData:(void *)arg16; // needs 16 arg types, found 14: struct __CVBuffer { }*, double, double, double, struct { double x1[3]; float x2; int x3; int x4; }, id, struct { double x1; double x2; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, double, const struct { double *x1; float *x2; int *x3; short *x4; short *x5; float x6[3]; int x7; int x8; float *x9; float *x10; int x11; int x12; int x13; int x14; int x15; struct vl_tile_t {} *x16; char *x17; struct { /* ? */ } *x18; int *x19; int x20; double x21[6]; float *x22; char *x23; int x24; float *x25; short *x26; short *x27; float *x28; double *x29; int *x30; float *x31; float *x32; float *x33; int x34; int x35; int x36; double x37; double x38; double x39; double x40; double x41; double x42; double x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; long long x60; int x61; }*, unsigned long long, const struct { double x1[3][3]; double x2[3]; float x3; float x4[36]; }*, bool
- (unsigned long long)inliersCount;
- (id)inputParameters;
- (bool)isEqual:(id)arg1;
- (id)pngData;
- (float*)points2D;
- (double*)points3D;
- (id)results;

@end
