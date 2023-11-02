
@interface HMIDESDatasetSample : HMFObject {
    float * _boxesTensorData;
    float * _classesTensorData;
    NSArray * _detections;
    NSData * _imageData;
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
    float * _weightsTensorData;
}

@property (readonly) NSArray *detections;
@property (readonly) NSData *imageData;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;

+ (id)logCategory;
+ (void)saveDESRecordWithVideoFrame:(id)arg1 recordInfo:(id)arg2;

- (void).cxx_destruct;
- (id)augmentWithOptions:(id)arg1;
- (id)createBoxesTensorWithError:(id*)arg1;
- (id)createClassesTensorWithError:(id*)arg1;
- (id)createImageTensorWithError:(id*)arg1;
- (struct __CVBuffer { }*)createRegionOfInterestPixelBufferWithError:(id*)arg1;
- (id)createWeightsTensorWithError:(id*)arg1;
- (void)dealloc;
- (id)detections;
- (id)imageData;
- (id)initWithImageData:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 detections:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;

@end
