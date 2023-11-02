
@interface TRIPersistedTaskAttribution : TRIPBMessage

@property (nonatomic, copy) NSString *applicationBundleId;
@property (nonatomic) int cloudKitContainer;
@property (nonatomic) bool hasApplicationBundleId;
@property (nonatomic) bool hasCloudKitContainer;
@property (nonatomic) bool hasNetworkBehavior;
@property (nonatomic) bool hasTeamId;
@property (nonatomic, retain) TRIPersistedNetworkBehavior *networkBehavior;
@property (nonatomic, copy) NSString *teamId;

+ (id)descriptor;

@end
