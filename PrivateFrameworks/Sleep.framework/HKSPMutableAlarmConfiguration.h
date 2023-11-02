
@interface HKSPMutableAlarmConfiguration : HKSPAlarmConfiguration <HKSPMutableObject> {
    HKSPChangeSet * _changeSet;
    <HKSPObject> * _originalObject;
}

@property (nonatomic) bool allowsSnooze;
@property (nonatomic, readonly) HKSPChangeSet *changeSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) <HKSPObject> *originalObject;
@property (nonatomic, copy) NSNumber *soundVolume;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *toneIdentifier;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, copy) NSString *vibrationIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsSnooze;
- (id)changeSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)freeze;
- (id)init;
- (id)initFromObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplateAlarmConfiguration:(id)arg1;
- (bool)isEnabled;
- (id)mutableCopy;
- (id)originalObject;
- (unsigned long long)playOptions;
- (void)revert;
- (void)setAllowsSnooze:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPlayOptions:(unsigned long long)arg1;
- (void)setSoundVolume:(id)arg1;
- (void)setToneIdentifier:(id)arg1;
- (void)setVibrationIdentifier:(id)arg1;
- (id)soundVolume;
- (id)toneIdentifier;
- (id)vibrationIdentifier;

@end
