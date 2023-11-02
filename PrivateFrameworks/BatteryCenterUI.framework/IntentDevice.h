
@interface IntentDevice : INObject

@property (nonatomic, copy) NSString *accessoryIdentifier;
@property (nonatomic, copy) NSNumber *isCharging;
@property (nonatomic, copy) NSNumber *isCustomImage;
@property (nonatomic, copy) NSNumber *isInternal;
@property (nonatomic, copy) NSNumber *isLowBattery;
@property (nonatomic, copy) NSNumber *isLowPowerModeActive;
@property (nonatomic, copy) NSNumber *isSynthesized;
@property (nonatomic, copy) NSNumber *parts;
@property (nonatomic, copy) NSNumber *percentCharge;
@property (nonatomic, copy) NSString *systemImageName;

@end
