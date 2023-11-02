
@protocol PNFaceProtocol <NSObject>

@required

- (unsigned short)ageType;
- (double)centerX;
- (double)centerY;
- (long long)clusterSequenceNumber;
- (NSData *)faceprintData;
- (NSString *)localIdentifier;
- (NSString *)personLocalIdentifier;
- (unsigned short)poseType;
- (double)poseYaw;
- (long long)qualityMeasure;
- (void)setQualityMeasure:(long long)arg1;
- (double)size;
- (long long)vuObservationID;

@end
