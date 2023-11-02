
@interface GVSOverscanPredictor : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _cameraAlignment;
    double  _detectionTimeoutSeconds;
    void _estimatedCorrection;
    void _estimatedOverscan;
    void _imageCenter;
    void _imageSize;
    double  _latestSampleTimestamp;
    void _margin;
    double  _overscanFitsTimestamp;
    NSDictionary * _pixelSizeByPortType;
    NSString * _previousPort;
    struct { 
        bool doingBiasEstimation; 
        double timestamp; 
        struct { 
            double w; 
            double x; 
            double y; 
            double z; 
        } quaternion; 
    }  _rawQuaternionArray;
    double  _resetTimeoutSeconds;
    VISRotationCorrectionEstimator * _visEstimator;
}

- (void).cxx_destruct;
- (int)computeFocalLength:(float*)arg1 fromMetadata:(id)arg2;
- (int)estimateOverscanUseFromMetadata:(id)arg1 finalCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)estimateOverscanUseFromRotation:(void *)arg1 focalLength:(void *)arg2 cornerCoords:(void *)arg3; // needs 3 arg types, found 2: float, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; }
- (id)initWithConfig:(struct VISOverscanPredictorConfiguration { float x1; float x2; })arg1 cameraInfoByPortType:(id)arg2 visInputPixelBufferAttributes:(id)arg3;
- (int)parseCameraInfoByPortType:(id)arg1;
- (bool)predictOverscanFitsFromMetadata:(id)arg1 finalCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)resetAndClear;
- (void)resetPrediction;
- (void)setCameraAlignmentForPortType:(id)arg1;

@end
