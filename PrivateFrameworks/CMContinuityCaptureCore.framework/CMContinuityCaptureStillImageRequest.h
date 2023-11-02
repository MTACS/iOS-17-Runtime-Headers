
@interface CMContinuityCaptureStillImageRequest : NSObject <NSSecureCoding> {
    bool  _captureComplete;
    id /* block */  _completionHandler;
    NSString * _compressedFormat;
    NSError * _error;
    int  _flashMode;
    bool  _highResolutionPhotoEnabled;
    unsigned int  _imageCodecType;
    NSData * _imageFileData;
    int  _imageHeight;
    int  _imageWidth;
    struct { 
        int width; 
        int height; 
    }  _maxPhotoDimensions;
    NSNumber * _networkTimestamp;
    int  _photoQualityPrioritization;
    long long  _uniqueID;
}

@property (nonatomic) bool captureComplete;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSString *compressedFormat;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) int flashMode;
@property (nonatomic) bool highResolutionPhotoEnabled;
@property (nonatomic) unsigned int imageCodecType;
@property (nonatomic, retain) NSData *imageFileData;
@property (nonatomic) int imageHeight;
@property (nonatomic) int imageWidth;
@property (nonatomic) struct { int x1; int x2; } maxPhotoDimensions;
@property (nonatomic, retain) NSNumber *networkTimestamp;
@property (nonatomic) int photoQualityPrioritization;
@property (nonatomic) long long uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)captureComplete;
- (id /* block */)completionHandler;
- (id)compressedFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (int)flashMode;
- (bool)highResolutionPhotoEnabled;
- (unsigned int)imageCodecType;
- (id)imageFileData;
- (int)imageHeight;
- (int)imageWidth;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct { int x1; int x2; })maxPhotoDimensions;
- (id)networkTimestamp;
- (int)photoQualityPrioritization;
- (void)setCaptureComplete:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompressedFormat:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setHighResolutionPhotoEnabled:(bool)arg1;
- (void)setImageCodecType:(unsigned int)arg1;
- (void)setImageFileData:(id)arg1;
- (void)setImageHeight:(int)arg1;
- (void)setImageWidth:(int)arg1;
- (void)setMaxPhotoDimensions:(struct { int x1; int x2; })arg1;
- (void)setNetworkTimestamp:(id)arg1;
- (void)setPhotoQualityPrioritization:(int)arg1;
- (void)setUniqueID:(long long)arg1;
- (long long)uniqueID;

@end
