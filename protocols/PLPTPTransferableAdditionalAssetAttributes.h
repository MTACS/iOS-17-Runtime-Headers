
@protocol PLPTPTransferableAdditionalAssetAttributes <NSObject>

@required

- (NSNumber *)embeddedThumbnailHeight;
- (NSNumber *)embeddedThumbnailLength;
- (NSNumber *)embeddedThumbnailOffset;
- (NSNumber *)embeddedThumbnailWidth;
- (NSString *)exifTimestampString;
- (NSString *)masterFingerPrint;
- (NSString *)originatingAssetIdentifier;
- (long long)ptpTrashedState;
- (PLSpatialOverCaptureInformation *)spatialOverCaptureInformation;

@end
