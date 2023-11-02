
@interface VNDetectedObjectObservation : VNObservation {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    VNPixelBufferObservation * _globalSegmentationMask;
    NSUUID * _groupId;
    NSUUID * _identifier;
    VNPixelBufferObservation * _instanceSegmentationMask;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) VNPixelBufferObservation *globalSegmentationMask;
@property (nonatomic, readonly) NSUUID *groupId;
@property (copy) NSUUID *identifier;
@property (nonatomic, readonly) VNPixelBufferObservation *instanceSegmentationMask;
@property (nonatomic, readonly) bool providesBoundsNormalizedToROI;

+ (bool)boundingBoxIsCalculatedProperty;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (id)observationWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxInTopLeftOrigin:(bool)arg1 orientation:(unsigned int)arg2;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)globalSegmentationMask;
- (id)groupId;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 groupId:(id)arg3;
- (id)initWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)instanceSegmentationMask;
- (bool)isEqual:(id)arg1;
- (bool)providesBoundsNormalizedToROI;
- (void)setIdentifier:(id)arg1;
- (id)vn_cloneObject;

@end
