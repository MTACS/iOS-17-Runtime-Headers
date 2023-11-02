
@interface VNSaliencyImageObservation : VNPixelBufferObservation {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mComputeBoundingBoxesLock;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _mHighlySalientRegion;
    struct CGSize { 
        double width; 
        double height; 
    }  _mOriginalImageSize;
    NSArray * _mSalientObjects;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _mSalientRegion;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } narrowedBoundingBox;
@property (nonatomic, readonly) NSArray *salientObjects;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_computeBoundingBoxes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (struct __CVBuffer { }*)createSaliencyImageAndReturnError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 rawSaliencyImage:(struct __CVBuffer { }*)arg2 originalImageSize:(struct CGSize { double x1; double x2; })arg3 salientObjectBoundingBoxes:(id)arg4;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })narrowedBoundingBox;
- (id)salientObjects;
- (id)salientObjectsAndReturnError:(id*)arg1;
- (id)vn_cloneObject;

@end
