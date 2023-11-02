
@interface HMDCameraProfileSettingsDerivedPropertiesModel : HMBModel

@property unsigned long long currentAccessMode;
@property (retain) NSDate *currentAccessModeChangeDate;
@property long long currentAccessModeChangeReason;
@property (retain) NSNumber *currentAccessModeChangeReasonField;
@property (retain) NSNumber *currentAccessModeField;

+ (id)hmbProperties;

- (unsigned long long)currentAccessMode;
- (long long)currentAccessModeChangeReason;
- (void)setCurrentAccessMode:(unsigned long long)arg1;
- (void)setCurrentAccessModeChangeReason:(long long)arg1;

@end
