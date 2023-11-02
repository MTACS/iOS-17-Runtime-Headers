
@interface TRIFile : TRIPBMessage

@property (nonatomic, retain) TRIAsset *asset;
@property (nonatomic) bool hasAsset;
@property (nonatomic) bool hasIsOnDemand;
@property (nonatomic) bool hasPath;
@property (nonatomic) bool isOnDemand;
@property (nonatomic, copy) NSString *path;

+ (id)descriptor;

- (bool)requiresDownload;

@end
