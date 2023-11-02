
@interface TRIProvisionalFactorpackMetadata : TRIPBMessage

@property (nonatomic) unsigned int attempts;
@property (nonatomic, copy) NSString *factorPackId;
@property (nonatomic) bool hasAttempts;
@property (nonatomic) bool hasFactorPackId;
@property (nonatomic) bool hasRejected;
@property (nonatomic) bool rejected;

+ (id)descriptor;

@end
