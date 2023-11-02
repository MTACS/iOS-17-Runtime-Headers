
@interface VIStreamingFrame : NSObject {
    <VIImageContent> * _imageContent;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedRegionOfInterest;
    double  _stabilityScore;
    double  _timestamp;
}

@property (nonatomic, readonly) <VIImageContent> *imageContent;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedRegionOfInterest;
@property (nonatomic, readonly) double stabilityScore;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id)imageContent;
- (id)initWithTimeStamp:(double)arg1 imageContent:(id)arg2 normalizedRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 stabilityScore:(double)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedRegionOfInterest;
- (double)stabilityScore;
- (double)timestamp;

@end
