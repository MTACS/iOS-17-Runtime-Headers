
@interface VNPixelBufferObservation : VNObservation {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _croppedBoundingBox;
    NSString * _featureName;
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } croppedBoundingBox;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)createPixelBufferInOrientation:(unsigned int)arg1 error:(id*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })croppedBoundingBox;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 featureName:(id)arg2 CVPixelBuffer:(struct __CVBuffer { }*)arg3;
- (bool)isEqual:(id)arg1;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)vn_cloneObject;

@end
