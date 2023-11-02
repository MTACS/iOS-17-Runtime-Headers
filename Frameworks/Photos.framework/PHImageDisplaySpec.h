
@interface PHImageDisplaySpec : NSObject {
    long long  _contentMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedCropRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic) long long contentMode;
@property (nonatomic) struct CGSize { double x1; double x2; } fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;

- (long long)contentMode;
- (id)description;
- (struct CGSize { double x1; double x2; })fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
- (bool)hasExplicitCrop;
- (id)init;
- (id)initWithTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithTargetSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2;
- (id)initWithTargetSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 normalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (struct CGSize { double x1; double x2; })requestSizeFromFullSizedWidth:(long long)arg1 height:(long long)arg2;
- (struct CGSize { double x1; double x2; })requestSizeFromFullSizedWidth:(long long)arg1 height:(long long)arg2 resizeMode:(long long)arg3;
- (void)setContentMode:(long long)arg1;
- (void)setFallbackTargetSizeIfRequestedSizeNotLocallyAvailable:(struct CGSize { double x1; double x2; })arg1;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (id)shortDescription;
- (struct CGSize { double x1; double x2; })targetSize;

@end
