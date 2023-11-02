
@interface CVACameraCalibration : NSObject <NSSecureCoding> {
    NSArray * _cameraToIMURotation;
    NSArray * _cameraToIMUTranslation;
    NSArray * _chipOffset;
    double  _focalLengthX;
    double  _focalLengthY;
    unsigned int  _imageHeight;
    unsigned int  _imageWidth;
    long long  _lensDistortionModel;
    NSArray * _lensOffset;
    NSString * _metadataID;
    double  _principalPointX;
    double  _principalPointY;
    NSArray * _radialDistortion;
    NSNumber * _readoutTime;
    NSArray * _tangentialDistortion;
    double  _timestampCorrection;
}

@property (nonatomic, retain) NSArray *cameraToIMURotation;
@property (nonatomic, retain) NSArray *cameraToIMUTranslation;
@property (nonatomic, retain) NSArray *chipOffset;
@property (nonatomic) double focalLengthX;
@property (nonatomic) double focalLengthY;
@property (nonatomic) unsigned int imageHeight;
@property (nonatomic) unsigned int imageWidth;
@property (nonatomic) long long lensDistortionModel;
@property (nonatomic, retain) NSArray *lensOffset;
@property (nonatomic, retain) NSString *metadataID;
@property (nonatomic) double principalPointX;
@property (nonatomic) double principalPointY;
@property (nonatomic, retain) NSArray *radialDistortion;
@property (nonatomic, retain) NSNumber *readoutTime;
@property (nonatomic, retain) NSArray *tangentialDistortion;
@property (nonatomic) double timestampCorrection;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cameraToIMURotation;
- (id)cameraToIMUTranslation;
- (id)chipOffset;
- (void)encodeWithCoder:(id)arg1;
- (double)focalLengthX;
- (double)focalLengthY;
- (unsigned int)imageHeight;
- (unsigned int)imageWidth;
- (id)initWithCoder:(id)arg1;
- (long long)lensDistortionModel;
- (id)lensOffset;
- (id)metadataID;
- (double)principalPointX;
- (double)principalPointY;
- (id)radialDistortion;
- (id)readoutTime;
- (void)setCameraToIMURotation:(id)arg1;
- (void)setCameraToIMUTranslation:(id)arg1;
- (void)setChipOffset:(id)arg1;
- (void)setFocalLengthX:(double)arg1;
- (void)setFocalLengthY:(double)arg1;
- (void)setImageHeight:(unsigned int)arg1;
- (void)setImageWidth:(unsigned int)arg1;
- (void)setLensDistortionModel:(long long)arg1;
- (void)setLensOffset:(id)arg1;
- (void)setMetadataID:(id)arg1;
- (void)setPrincipalPointX:(double)arg1;
- (void)setPrincipalPointY:(double)arg1;
- (void)setRadialDistortion:(id)arg1;
- (void)setReadoutTime:(id)arg1;
- (void)setTangentialDistortion:(id)arg1;
- (void)setTimestampCorrection:(double)arg1;
- (id)tangentialDistortion;
- (double)timestampCorrection;

@end
