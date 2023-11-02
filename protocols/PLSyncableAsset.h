
@protocol PLSyncableAsset <NSObject, PLSyncableObject>

@required

- (NSString *)cloudIdentifier;
- (NSDate *)dateForComparingAdjustmentVersions;
- (NSSet *)detectedFaces;
- (id)faceAdjustmentVersion;
- (bool)faceDetectionComplete;
- (bool)hasAdjustments;
- (long long)height;
- (void)markForNeedingFaceDetection;
- (PLMomentShare *)momentShare;
- (void)setDetectedFaces:(NSSet *)arg1;
- (NSString *)syncDescription;
- (NSString *)syncedAdjustmentFingerprint;
- (long long)width;

@end
