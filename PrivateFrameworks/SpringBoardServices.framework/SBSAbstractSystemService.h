
@interface SBSAbstractSystemService : SBSAbstractFacilityService

@property (nonatomic, readonly) SBSSystemServiceClient *client;

+ (Class)serviceFacilityClientClass;

- (id)client;

@end
