
@interface PHAssetPhotosInfoPanelExtendedProperties : PHAssetPropertySet {
    NSNumber * _aperture;
    NSNumber * _bitrate;
    NSString * _cameraMake;
    NSString * _cameraModel;
    NSString * _codec;
    NSDate * _dateCreated;
    NSNumber * _digitalZoomRatio;
    NSNumber * _duration;
    NSNumber * _exposureBias;
    NSNumber * _flashFired;
    NSNumber * _focalLength;
    NSNumber * _focalLengthIn35mm;
    NSString * _formattedCameraModel;
    NSNumber * _fps;
    NSNumber * _iso;
    NSString * _lensModel;
    NSNumber * _meteringMode;
    NSNumber * _sampleRate;
    NSNumber * _semanticStylePreset;
    NSNumber * _shutterSpeed;
    NSString * _timezoneName;
    NSNumber * _timezoneOffset;
    NSNumber * _trackFormat;
    NSNumber * _whiteBalance;
}

@property (nonatomic, readonly) NSNumber *aperture;
@property (nonatomic, readonly) NSNumber *bitrate;
@property (nonatomic, readonly) NSString *cameraMake;
@property (nonatomic, readonly) NSString *cameraModel;
@property (nonatomic, readonly) NSString *codec;
@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly) NSNumber *digitalZoomRatio;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSNumber *exposureBias;
@property (nonatomic, readonly) NSNumber *flashFired;
@property (nonatomic, readonly) NSNumber *focalLength;
@property (nonatomic, readonly) NSNumber *focalLengthIn35mm;
@property (nonatomic, readonly) NSString *formattedCameraModel;
@property (nonatomic, readonly) NSNumber *fps;
@property (nonatomic, readonly) NSNumber *iso;
@property (nonatomic, readonly) NSString *lensModel;
@property (nonatomic, readonly) NSNumber *meteringMode;
@property (nonatomic, readonly) NSNumber *sampleRate;
@property (nonatomic, readonly) NSNumber *semanticStylePreset;
@property (nonatomic, readonly) NSNumber *shutterSpeed;
@property (nonatomic, readonly) NSString *timezoneName;
@property (nonatomic, readonly) NSNumber *timezoneOffset;
@property (nonatomic, readonly) NSNumber *trackFormat;
@property (nonatomic, readonly) NSNumber *whiteBalance;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)aperture;
- (id)bitrate;
- (id)cameraMake;
- (id)cameraModel;
- (id)codec;
- (id)dateCreated;
- (id)digitalZoomRatio;
- (id)duration;
- (id)exposureBias;
- (id)flashFired;
- (id)focalLength;
- (id)focalLengthIn35mm;
- (id)formattedCameraModel;
- (id)fps;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)iso;
- (id)lensModel;
- (id)meteringMode;
- (id)sampleRate;
- (id)semanticStylePreset;
- (id)shutterSpeed;
- (id)timezoneName;
- (id)timezoneOffset;
- (id)trackFormat;
- (id)whiteBalance;

@end
