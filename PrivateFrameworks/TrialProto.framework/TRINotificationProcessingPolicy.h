
@interface TRINotificationProcessingPolicy : TRIPBMessage

@property (nonatomic) int assetDownloadPolicy;
@property (nonatomic) unsigned int delaySeconds;
@property (nonatomic) bool hasAssetDownloadPolicy;
@property (nonatomic) bool hasDelaySeconds;

+ (id)descriptor;

@end
