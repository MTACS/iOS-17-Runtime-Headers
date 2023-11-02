
@interface CVACameraCalibrationData : NSObject <NSSecureCoding> {
    AVCameraCalibrationData * _calibrationData;
    NSDictionary * _calibrationDictionary;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _extrinsicMatrix;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _intrinsicMatrix;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicMatrixReferenceDimensions;
    NSData * _inverseLensDistortionLookupTable;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lensDistortionCenter;
    NSData * _lensDistortionLookupTable;
    float  _pixelSize;
    NSString * _streamID;
    double  _timestamp;
}

@property (nonatomic, retain) AVCameraCalibrationData *calibrationData;
@property (nonatomic, retain) NSDictionary *calibrationDictionary;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } extrinsicMatrix;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } intrinsicMatrix;
@property (nonatomic) struct CGSize { double x1; double x2; } intrinsicMatrixReferenceDimensions;
@property (nonatomic, retain) NSData *inverseLensDistortionLookupTable;
@property (nonatomic) struct CGPoint { double x1; double x2; } lensDistortionCenter;
@property (nonatomic, retain) NSData *lensDistortionLookupTable;
@property (nonatomic) float pixelSize;
@property (nonatomic, retain) NSString *streamID;
@property (nonatomic) double timestamp;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)calibrationData;
- (id)calibrationDictionary;
- (void)encodeWithCoder:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })extrinsicMatrix;
- (id)initWithAVCameraCalibrationData:(id)arg1 timestamp:(double)arg2 streamID:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })intrinsicMatrix;
- (struct CGSize { double x1; double x2; })intrinsicMatrixReferenceDimensions;
- (id)inverseLensDistortionLookupTable;
- (struct CGPoint { double x1; double x2; })lensDistortionCenter;
- (id)lensDistortionLookupTable;
- (float)pixelSize;
- (void)setCalibrationData:(id)arg1;
- (void)setCalibrationDictionary:(id)arg1;
- (void)setExtrinsicMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setIntrinsicMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setIntrinsicMatrixReferenceDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setInverseLensDistortionLookupTable:(id)arg1;
- (void)setLensDistortionCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLensDistortionLookupTable:(id)arg1;
- (void)setPixelSize:(float)arg1;
- (void)setStreamID:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)streamID;
- (double)timestamp;
- (void)updateProperties:(id)arg1;

@end
