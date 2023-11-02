
@interface CAMFaceResult : NSObject <CAMMetadataObjectResult> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    double  _rollAngle;
    AVMetadataFaceObject * _underlyingFaceObject;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *metadataType;
@property (nonatomic, readonly) double rollAngle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long syntheticFocusMode;
@property (nonatomic, readonly) AVMetadataFaceObject *underlyingFaceObject;
@property (nonatomic, readonly) AVMetadataObject *underlyingMetadataObject;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)burstMetadataRepresentation;
- (id)description;
- (id)initWithFaceObject:(id)arg1;
- (id)metadataType;
- (double)rollAngle;
- (unsigned long long)syntheticFocusMode;
- (id)underlyingFaceObject;
- (id)underlyingMetadataObject;
- (id)uniqueIdentifier;

@end
