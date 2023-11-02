
@interface VNObservation : NSObject <NSCopying, NSSecureCoding, VNCoreMLTransformerDetectionprintProviding, VNCoreMLTransformerSceneprintsProviding, VNEntityIdentificationModelObservation, VNObjectCloning, VNOriginatingRequestSpecifierProviding, VNRequestRevisionProviding> {
    float  _confidence;
    VNRequestSpecifier * _originatingRequestSpecifier;
    NSPointerArray * _requestImageBuffers;
    NSPointerArray * _requestImageBuffersCacheKeys;
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
    NSUUID * _uuid;
}

@property (nonatomic) float confidence;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (nonatomic, retain) NSPointerArray *requestImageBuffers;
@property (nonatomic, retain) NSPointerArray *requestImageBuffersCacheKeys;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (setter=setUUID:, nonatomic, retain) NSUUID *uuid;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (id)defaultOriginatingRequestSpecifierForRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)VNCoreMLTransformerDetectionprintAndReturnError:(id*)arg1;
- (id)VNCoreMLTransformerSceneprintsAndReturnError:(id*)arg1;
- (id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:(id)arg1 error:(id*)arg2;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getDataDetectorResults:(id*)arg1;
- (id)getDataDetectorResultsForString:(id)arg1 error:(id*)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)observationWithOriginatingRequestSpecifier:(id)arg1;
- (id)originatingRequestSpecifier;
- (id)requestImageBuffers;
- (id)requestImageBuffersCacheKeys;
- (unsigned long long)requestRevision;
- (void)setConfidence:(float)arg1;
- (void)setRequestImageBuffers:(id)arg1;
- (void)setRequestImageBuffersCacheKeys:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setUUID:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)uuid;
- (id)vn_cloneObject;

@end
