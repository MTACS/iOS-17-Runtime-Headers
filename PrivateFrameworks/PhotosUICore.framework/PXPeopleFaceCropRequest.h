
@interface PXPeopleFaceCropRequest : NSObject {
    PHAsset * _asset;
    bool  _canceled;
    PHFace * _face;
    int  _faceCropRequestID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _flippedNormalizedEdgeAdjustedCropRect;
    int  _imageManagerRequestID;
    struct CGPoint { 
        double x; 
        double y; 
    }  _normalizedCenterEyeLine;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedEdgeAdjustedCropRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedFaceCropRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedSmallFaceRect;
    PXPeopleFaceCropFetchOptions * _options;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _smallFaceRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSizeToUse;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, readonly) bool canceled;
@property (nonatomic, retain) PHFace *face;
@property (nonatomic, readonly) int faceCropRequestID;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } flippedNormalizedEdgeAdjustedCropRect;
@property (nonatomic) int imageManagerRequestID;
@property (nonatomic) struct CGPoint { double x1; double x2; } normalizedCenterEyeLine;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedEdgeAdjustedCropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedFaceCropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedSmallFaceRect;
@property (nonatomic, readonly) PXPeopleFaceCropFetchOptions *options;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } smallFaceRect;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSizeToUse;

+ (int)generateUniqueRequestID;

- (void).cxx_destruct;
- (id)asset;
- (void)cancel;
- (bool)canceled;
- (id)description;
- (id)face;
- (int)faceCropRequestID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })flippedNormalizedEdgeAdjustedCropRect;
- (int)imageManagerRequestID;
- (id)initWithFetchOptions:(id)arg1;
- (struct CGPoint { double x1; double x2; })normalizedCenterEyeLine;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedEdgeAdjustedCropRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFaceCropRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedSmallFaceRect;
- (id)options;
- (void)setAsset:(id)arg1;
- (void)setFace:(id)arg1;
- (void)setImageManagerRequestID:(int)arg1;
- (void)setNormalizedCenterEyeLine:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNormalizedEdgeAdjustedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNormalizedFaceCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNormalizedSmallFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSmallFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetSizeToUse:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })smallFaceRect;
- (struct CGSize { double x1; double x2; })targetSizeToUse;

@end
