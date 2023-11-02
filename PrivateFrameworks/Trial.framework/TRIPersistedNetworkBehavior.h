
@interface TRIPersistedNetworkBehavior : TRIPBMessage

@property (nonatomic) bool allowsCellular;
@property (nonatomic) bool hasAllowsCellular;
@property (nonatomic) bool hasNetworkBehavior;
@property (nonatomic) int networkBehavior;

+ (id)descriptor;

@end
