
@interface VolumeLevel : INObject

@property (nonatomic, retain) NSNumber *currentVolumeOutput;
@property (nonatomic, retain) NSNumber *resolvedVolumeOutput;
@property (nonatomic) long long volumeSettingQualifier;
@property (nonatomic) long long volumeSettingState;
@property (nonatomic) long long volumeSettingType;
@property (nonatomic) long long volumeSettingUnit;
@property (nonatomic, retain) NSNumber *volumeSettingValue;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
