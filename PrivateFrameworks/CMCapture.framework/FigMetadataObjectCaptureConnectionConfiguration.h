
@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    int  _faceTrackingMaxFaces;
    float  _faceTrackingNetworkFailureThresholdMultiplier;
    bool  _faceTrackingPlusEnabled;
    bool  _faceTrackingUsesFaceRecognition;
    NSArray * _metadataIdentifiers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _metadataRectOfInterest;
}

@property (nonatomic) int faceTrackingMaxFaces;
@property (nonatomic) float faceTrackingNetworkFailureThresholdMultiplier;
@property (nonatomic) bool faceTrackingPlusEnabled;
@property (nonatomic) bool faceTrackingUsesFaceRecognition;
@property (nonatomic, copy) NSArray *metadataIdentifiers;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } metadataRectOfInterest;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (int)faceTrackingMaxFaces;
- (float)faceTrackingNetworkFailureThresholdMultiplier;
- (bool)faceTrackingPlusEnabled;
- (bool)faceTrackingUsesFaceRecognition;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metadataIdentifiers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })metadataRectOfInterest;
- (void)setFaceTrackingMaxFaces:(int)arg1;
- (void)setFaceTrackingNetworkFailureThresholdMultiplier:(float)arg1;
- (void)setFaceTrackingPlusEnabled:(bool)arg1;
- (void)setFaceTrackingUsesFaceRecognition:(bool)arg1;
- (void)setMetadataIdentifiers:(id)arg1;
- (void)setMetadataRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
