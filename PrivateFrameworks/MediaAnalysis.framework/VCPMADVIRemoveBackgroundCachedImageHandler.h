
@interface VCPMADVIRemoveBackgroundCachedImageHandler : NSObject {
    NSString * _identifier;
    unsigned int  _orientation;
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
    VNImageRequestHandler * _requestHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _resolution;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;
@property (nonatomic, readonly) VNImageRequestHandler *requestHandler;

- (void).cxx_destruct;
- (id)initWithImageAsset:(id)arg1 requestHandler:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)matchesImageAsset:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (id)requestHandler;

@end
