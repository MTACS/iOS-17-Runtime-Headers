
@interface HMDCameraRecordingVideoAttributes : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    NSNumber * _frameRate;
    NSNumber * _imageHeight;
    NSNumber * _imageWidth;
    long long  _resolution;
}

@property (nonatomic, readonly, copy) NSNumber *frameRate;
@property (nonatomic, readonly, copy) NSNumber *imageHeight;
@property (nonatomic, readonly, copy) NSNumber *imageWidth;
@property (nonatomic, readonly) long long resolution;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)frameRate;
- (id)imageHeight;
- (id)imageWidth;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageWidth:(id)arg1 imageHeight:(id)arg2 frameRate:(id)arg3;
- (id)initWithResolution:(long long)arg1 frameRate:(id)arg2;
- (long long)resolution;
- (id)tlvData;

@end
