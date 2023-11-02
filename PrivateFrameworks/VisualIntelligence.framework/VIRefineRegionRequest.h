
@interface VIRefineRegionRequest : NSObject {
    <VIImageContent> * _image;
    long long  _imageType;
    <MTLDevice> * _preferredMetalDevice;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
}

@property (nonatomic, readonly) <VIImageContent> *image;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) <MTLDevice> *preferredMetalDevice;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;

- (void).cxx_destruct;
- (id)image;
- (long long)imageType;
- (id)initWithImage:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 imageType:(long long)arg3 preferredMetalDevice:(id)arg4;
- (id)preferredMetalDevice;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;

@end
