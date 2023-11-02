
@interface PLExtendedAttributes : PLManagedObject

@property (nonatomic, retain) NSNumber *aperture;
@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, retain) NSNumber *bitrate;
@property (nonatomic, retain) NSString *cameraMake;
@property (nonatomic, retain) NSString *cameraModel;
@property (nonatomic, retain) NSString *codec;
@property (nonatomic, retain) NSDate *dateCreated;
@property (nonatomic, retain) NSNumber *digitalZoomRatio;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSNumber *exposureBias;
@property (nonatomic, retain) NSNumber *flashFired;
@property (nonatomic, retain) NSNumber *focalLength;
@property (nonatomic, retain) NSNumber *focalLengthIn35mm;
@property (nonatomic, retain) NSNumber *fps;
@property (nonatomic, retain) NSNumber *iso;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSString *lensModel;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSNumber *meteringMode;
@property (nonatomic, retain) NSNumber *orientation;
@property (nonatomic, retain) NSNumber *sampleRate;
@property (nonatomic, retain) NSNumber *shutterSpeed;
@property (nonatomic, retain) NSNumber *slushPreset;
@property (nonatomic, retain) NSNumber *slushSceneBias;
@property (nonatomic, retain) NSNumber *slushVersion;
@property (nonatomic, retain) NSNumber *slushWarmthBias;
@property (nonatomic, retain) NSString *timezoneName;
@property (nonatomic, retain) NSNumber *timezoneOffset;
@property (nonatomic, retain) NSNumber *trackFormat;
@property (nonatomic, retain) NSNumber *whiteBalance;

+ (id)distinctValuesForKeyPath:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;

- (void)correctOrientationIfRequired;
- (id)formattedCameraModel;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (void)willSave;

@end
