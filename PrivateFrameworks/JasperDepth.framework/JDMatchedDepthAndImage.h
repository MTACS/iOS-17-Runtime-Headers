
@interface JDMatchedDepthAndImage : NSObject {
    JDTimestampedImage * _image;
    NSArray * _originalPointClouds;
    JDTimestampedPointCloud * _pointCloud;
}

@property (nonatomic, retain) JDTimestampedImage *image;
@property (nonatomic, retain) NSArray *originalPointClouds;
@property (nonatomic, retain) JDTimestampedPointCloud *pointCloud;

- (void).cxx_destruct;
- (id)image;
- (id)originalPointClouds;
- (id)pointCloud;
- (void)setImage:(id)arg1;
- (void)setOriginalPointClouds:(id)arg1;
- (void)setPointCloud:(id)arg1;

@end
