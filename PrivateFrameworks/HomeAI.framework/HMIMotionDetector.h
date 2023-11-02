
@interface HMIMotionDetector : HMFObject <HMFLogging> {
    struct __CFArray { } * _resizedSampleBuffers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct __CFArray { }*resizedSampleBuffers;
@property (readonly) Class superclass;

+ (id)logCategory;

- (id)_computeOpticalFlow:(struct __CVBuffer { }*)arg1 with:(struct __CVBuffer { }*)arg2 globalMotionScore:(float*)arg3 activityZones:(id)arg4 operationMode:(unsigned long long)arg5;
- (bool)applyActivityZoneFilteringOnSourcePoint:(struct CGPoint { double x1; double x2; })arg1 destinationPoint:(struct CGPoint { double x1; double x2; })arg2 frameSize:(struct CGSize { double x1; double x2; })arg3 activityZones:(id)arg4;
- (id)calculateMotionDetection:(struct vector<unsigned char, std::allocator<unsigned char>> { char *x1; char *x2; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x_3_1_1; } x3; })arg1 score:(struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })arg2 srcFeatureCVPoints:(struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> { void *x1; void *x2; struct __compressed_pair<cv::Point_<float> *, std::allocator<cv::Point_<float>>> { void *x_3_1_1; } x3; })arg3 dstFeatreCVPoints:(struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> { void *x1; void *x2; struct __compressed_pair<cv::Point_<float> *, std::allocator<cv::Point_<float>>> { void *x_3_1_1; } x3; })arg4 activityZones:(id)arg5 operationMode:(unsigned long long)arg6 srcPyramid:(struct vector<cv::Mat, std::allocator<cv::Mat>> { struct Mat {} *x1; struct Mat {} *x2; struct __compressed_pair<cv::Mat *, std::allocator<cv::Mat>> { struct Mat {} *x_3_1_1; } x3; })arg7 frameSize:(struct CGSize { double x1; double x2; })arg8 brightnessChange:(float)arg9;
- (void)dealloc;
- (id)detectWithGlobalMotionScore:(float*)arg1 referencePixelBuffer:(struct __CVBuffer { }*)arg2 targetPixelBuffer:(struct __CVBuffer { }*)arg3 activityZones:(id)arg4 detectorMode:(unsigned long long)arg5;
- (id)init;
- (struct __CFArray { }*)resizedSampleBuffers;
- (id)visualizeMotionDetections:(id)arg1 frameSize:(struct CGSize { double x1; double x2; })arg2 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;

@end
