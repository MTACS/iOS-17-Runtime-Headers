
@protocol PFMetadataCore

@required

- (NSString *)artworkContentDescription;
- (NSString *)cameraMake;
- (NSString *)cameraModel;
- (NSString *)captionAbstract;
- (UTType *)contentType;
- (NSDate *)creationDate;
- (long long)creationDateSource;
- (NSString *)creationDateString;
- (unsigned char)detail;
- (struct CGSize { double x1; double x2; })exifPixelSize;
- (NSDate *)fileCreationDate;
- (NSDate *)fileModificationDate;
- (unsigned long long)fileSize;
- (NSDictionary *)fileSystemProperties;
- (NSURL *)fileURL;
- (CLLocation *)gpsLocation;
- (bool)isHDR;
- (bool)isHDR_ExtendedRange;
- (bool)isHDR_TS22028_5;
- (bool)isImage;
- (bool)isMovie;
- (bool)isSpatialMedia;
- (bool)isSpatialOverCapture;
- (bool)isSyndicationOriginated;
- (NSArray *)keywords;
- (NSNumber *)latitude;
- (NSString *)livePhotoPairingIdentifier;
- (NSNumber *)longitude;
- (long long)orientation;
- (struct CGSize { double x1; double x2; })orientedPixelSize;
- (NSString *)originalFileName;
- (NSString *)originatingAssetIdentifier;
- (NSNumber *)playbackVariation;
- (NSString *)renderOriginatingAssetIdentifier;
- (long long)sourceType;
- (NSString *)spatialOverCaptureIdentifier;
- (NSDictionary *)syndicationProperties;
- (NSTimeZone *)timeZone;
- (PFTimeZoneLookup *)timeZoneLookup;
- (NSString *)timeZoneName;
- (NSNumber *)timeZoneOffset;
- (NSString *)title;
- (NSDate *)utcCreationDate;

@end
