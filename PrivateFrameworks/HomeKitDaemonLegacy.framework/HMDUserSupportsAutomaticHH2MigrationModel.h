
@interface HMDUserSupportsAutomaticHH2MigrationModel : HMBModel

@property (nonatomic, copy) NSNumber *supportsAutomaticHH2Migration;
@property (nonatomic, copy) NSNumber *supportsHH2MigrationByOwnerAuto;

+ (id)hmbProperties;

@end
